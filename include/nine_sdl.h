
#ifdef __cplusplus
extern "C" {
#endif

struct IDirect3D9Ex;
HRESULT Direct3DCreate9Ex(UINT SDKVersion, struct IDirect3D9Ex **ppD3D9 );
struct IDirect3D9* Direct3DCreate9(UINT SDKVersion);

#ifdef __cplusplus
}
#endif

