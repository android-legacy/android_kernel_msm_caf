GCC_VERSION      := $(shell $(CONFIG_SHELL) $(PWD)/scripts/gcc-version.sh $(CROSS_COMPILE)gcc)

ifneq ($(CONFIG_MSM_CAMERA_LEGACY),y)
  obj-$(CONFIG_MSM_CAMERA)   += msm_camera_io_util.o
endif
EXTRA_CFLAGS += -Idrivers/media/video/msm
ifeq ($(CONFIG_MSM_CAMERA_V4L2),y)
  obj-$(CONFIG_MSM_CAMERA) += msm_camera_i2c_mux.o
  obj-$(CONFIG_ARCH_MSM7X27A) += msm_io_7x27a_v4l2.o
  obj-$(CONFIG_ARCH_MSM8X60) += msm_io_vfe31_v4l2.o
  obj-$(CONFIG_ARCH_MSM7X30) += msm_io_vfe31_v4l2.o
else
ifeq ($(CONFIG_MSM_CAMERA_LEGACY),y)
  obj-$(CONFIG_ARCH_MSM7X27A) += msm_io_7x27a_legacy.o
else
  obj-$(CONFIG_ARCH_MSM7X27A) += msm_io_7x27a.o
endif
  obj-$(CONFIG_ARCH_MSM8X60) += msm_io_8x60.o
  obj-$(CONFIG_ARCH_MSM7X30) += msm_io_vfe31.o
endif
obj-$(CONFIG_ARCH_MSM_ARM11) += msm_io7x.o
obj-$(CONFIG_ARCH_QSD8X50) += msm_io8x.o
obj-$(CONFIG_ARCH_MSM8960) += msm_io_8960.o
