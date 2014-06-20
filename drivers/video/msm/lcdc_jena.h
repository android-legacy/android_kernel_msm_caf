#ifndef __LCDC_ILI9486L_HVGA_H__
#define __LCDC_ILI9486L_HVGA_H__

struct spi_cmd_desc {
	int dlen;
	char *payload;
	int wait;
};

static char sleep_in_seq[1] = { 0x10 };
static char sleep_out_seq[1] = { 0x11 };
static char disp_on_seq[1] = {0x29};
static char disp_off_seq[1] = { 0x28 };
static char sw_reset_seq[1] = { 0x01 };

static char hidden_register_setting_seq1[3] = {
	0xF9,
	0x00, 0x08
};

static char hidden_register_setting_seq2[10] = {
	0xF2,
	0x18, 0xA3, 0x12, 0x02, 0x82,
	0x32, 0xFF, 0x13, 0x00
};

static char hidden_register_setting_seq3[4] = {
	0xF8,
	0x21, 0x05, 0x02
};

static char power_setting_seq1[3] = {
	0xC0,
	0x07, 0x07
};

static char power_setting_seq2[2] = {
	0xC1,
	0x45
};

static char power_setting_seq3[2] = {
	0xC2,
	0x33
};

static char display_param_setting_seq1[5] = {
	0x2A,
	0x00, 0x00, 0x01, 0x3F
};

static char display_param_setting_seq2[5] = {
	0x2B,
	0x00, 0x00, 0x01, 0xDF
};

static char display_param_setting_seq3[2] = {
	0xB0,
	0x8C
};

static char display_param_setting_seq4[3] = {
	0xB1,
	0xB0, 0x11
};

static char display_param_setting_seq5[2] = {
	0xB4,
	0x02
};

static char display_param_setting_seq6[5] = {
	0xB5,
	0x08, 0x0C, 0x10, 0x0A
};

static char display_param_setting_seq7[4] = {
	0xB6,
	0x30, 0x42, 0x3B
};

static char display_param_setting_seq8[2] = {
	0xB7,
	0x07
};

static char display_param_setting_seq9[6] = {
	0xF4,
	0x00, 0x00, 0x08, 0x91, 0x04
};

static char display_param_setting_seq10[2] = {
	0x36,
	0x08
};

static char display_param_setting_seq11[2] = {
	0x3A,
	0x66
};

static char gamma_set_seq1[16] = {
	0xE0,
	0x01, 0x17, 0x14, 0x0D, 0x0E,
	0x06, 0x48, 0x74, 0x3B, 0x09,
	0x13, 0x07, 0x11, 0x0A, 0x0F
};

static char gamma_set_seq2[16] = {
	0xE1,
	0x0F, 0x22, 0x20, 0x07, 0x0A,
	0x03, 0x46, 0x54, 0x34, 0x05,
	0x10, 0x06, 0x1E, 0x1A, 0x01
};

static struct spi_cmd_desc display_on_cmds[] = {
	{sizeof(hidden_register_setting_seq1), hidden_register_setting_seq1, 0},
	{sizeof(hidden_register_setting_seq2), hidden_register_setting_seq2, 0},
	{sizeof(hidden_register_setting_seq3), hidden_register_setting_seq3, 0},

	{sizeof(power_setting_seq1), power_setting_seq1, 0},
	{sizeof(power_setting_seq2), power_setting_seq2, 0},
	{sizeof(power_setting_seq3), power_setting_seq3, 0},

	{sizeof(display_param_setting_seq1), display_param_setting_seq1, 0},
	{sizeof(display_param_setting_seq2), display_param_setting_seq2, 0},
	{sizeof(display_param_setting_seq3), display_param_setting_seq3, 0},
	{sizeof(display_param_setting_seq4), display_param_setting_seq4, 0},
	{sizeof(display_param_setting_seq5), display_param_setting_seq5, 0},
	{sizeof(display_param_setting_seq6), display_param_setting_seq6, 0},
	{sizeof(display_param_setting_seq7), display_param_setting_seq7, 0},
	{sizeof(display_param_setting_seq8), display_param_setting_seq8, 0},
	{sizeof(display_param_setting_seq9), display_param_setting_seq9, 0},
	{sizeof(display_param_setting_seq10), display_param_setting_seq10, 0},
	{sizeof(display_param_setting_seq11), display_param_setting_seq11, 0},

	{sizeof(gamma_set_seq1), gamma_set_seq1, 0},
	{sizeof(gamma_set_seq2), gamma_set_seq2, 0},

	{sizeof(sleep_out_seq), sleep_out_seq, 120},
	{sizeof(disp_on_seq), disp_on_seq, 10},
};

static char power_setting_SMD_seq1[4] = {
	0xB9,
	0xFF, 0x83, 0x57
};

static char power_setting_SMD_seq2[2] = {
	0x3A,
	0x60
};

static char power_setting_SMD_seq3[2] = {
	0xCC,
	0x05
};

static char power_setting_SMD_seq4[5] = {
	0xB3,
	0xC3, 0x06, 0x08, 0x04
};

static char power_setting_SMD_seq5[2] = {
	0xB6,
	0x58
};

static char power_setting_SMD_seq6[3] = {
	0xB5,
	0x04, 0x04
};

static char power_setting_SMD_seq7[7] = {
	0xB1,
	0x00, 0x12, 0x12, 0x12, 0x83,
	0X48
};

static char power_setting_SMD_seq8[6] = {
	0xB2,
	0x00, 0x83, 0x3b, 0x00, 0x20
};


static char power_setting_SMD_seq9[8] = {
	0xB4,
	0x80, 0x40, 0x00, 0x2A, 0x2A,
	0x0D, 0x4F
};

static char power_setting_SMD_seq10[7] = {
	0xC0,
	0x34, 0x34, 0xBF, 0x3C, 0xC8,
	0x1C
};

static char power_setting_SMD_seq11[35] = {
	0x0E,
	0x00, 0x14, 0x21, 0x2F, 0x38,
	0x4A, 0x51, 0x57, 0x46, 0x40,
	0x3A, 0x30, 0x2E, 0x29, 0x23,
	0x03, 0x04, 0x14, 0x1B, 0x2D,
	0x36, 0x46, 0x4E, 0x59, 0x3F,
	0x38, 0x38, 0x2E, 0x2A, 0x1D,
	0x1D, 0x03, 0x01, 0x01
};

static struct spi_cmd_desc display_on_SMD_cmds[] = {
	{sizeof(sleep_out_seq), sleep_out_seq, 150},
	{sizeof(power_setting_SMD_seq1), power_setting_SMD_seq1, 5},
	{sizeof(power_setting_SMD_seq2), power_setting_SMD_seq2, 0},
	{sizeof(power_setting_SMD_seq3), power_setting_SMD_seq3, 0},
	{sizeof(power_setting_SMD_seq4), power_setting_SMD_seq4, 0},
	{sizeof(power_setting_SMD_seq5), power_setting_SMD_seq5, 0},
	{sizeof(power_setting_SMD_seq6), power_setting_SMD_seq6, 0},
	{sizeof(power_setting_SMD_seq7), power_setting_SMD_seq7, 0},
	{sizeof(power_setting_SMD_seq8), power_setting_SMD_seq8, 0},
	{sizeof(power_setting_SMD_seq9), power_setting_SMD_seq9, 0},
	{sizeof(power_setting_SMD_seq10), power_setting_SMD_seq10, 0},
	{sizeof(power_setting_SMD_seq11), power_setting_SMD_seq11, 0},

	{sizeof(disp_on_seq), disp_on_seq, 30},
};

static struct spi_cmd_desc display_off_cmds[] = {
	{sizeof(disp_off_seq), disp_off_seq, 10},
	{sizeof(sleep_in_seq), sleep_in_seq, 120},
};

static struct spi_cmd_desc display_standby_in_cmds[] = {
	{sizeof(disp_off_seq), disp_off_seq, 0},
};

static struct spi_cmd_desc sw_rdy_cmds[] = {
	{sizeof(sw_reset_seq), sw_reset_seq, 120},
};
#endif

