#pragma once
#include"Model.h"
#include"WorldTransform.h"

	//地面
class Ground {

	public:
	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize(Model*model);

	/// <summary>
	/// 毎フレーム処理
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw(ViewProjection&viewProjection);

	private:
		//ワールド変換データ
	    WorldTransform worldTransform_;
		//モデル
	    Model* model_ = nullptr;
		//テクスチャハンドル
	    uint32_t textureHandle_ = 0u;
};
