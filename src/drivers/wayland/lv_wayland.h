/**
 * @file lv_wayland.h
 *
 */

#ifndef LV_WAYLAND_H
#define LV_WAYLAND_H

#ifdef __cplusplus
extern "C" {
#endif

#if LV_USE_WAYLAND

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

typedef bool (*lv_wayland_display_close_f_t)(lv_display_t * disp);

/**********************
 * GLOBAL PROTOTYPES
 **********************/
void lv_wayland_init(void);
void lv_wayland_deinit(void);
int lv_wayland_get_fd(void);
lv_display_t * lv_wayland_create_window(int32_t hor_res, int32_t ver_res, char *title,
                                     lv_wayland_display_close_f_t close_cb);
void lv_wayland_close_window(lv_display_t * disp);
bool lv_wayland_window_is_open(lv_display_t * disp);
void lv_wayland_window_set_fullscreen(lv_display_t * disp, bool fullscreen);
lv_indev_t * lv_wayland_get_pointer(lv_display_t * disp);
lv_indev_t * lv_wayland_get_pointeraxis(lv_display_t * disp);
lv_indev_t * lv_wayland_get_keyboard(lv_display_t * disp);
lv_indev_t * lv_wayland_get_touchscreen(lv_display_t * disp);
#ifdef LV_WAYLAND_TIMER_HANDLER
uint32_t lv_wayland_timer_handler(void);
#endif

/**********************
 *      MACROS
 **********************/

#endif /* LV_USE_WAYLAND */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* LV_WAYLAND_H */
