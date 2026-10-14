/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AICOMPOSECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AICOMPOSECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageComposeCanvas.h>
#include <tencentcloud/mps/v20190612/model/ImageComposeLayer.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Layer fusion configuration for image processing
                */
                class AiComposeConfig : public AbstractModel
                {
                public:
                    AiComposeConfig();
                    ~AiComposeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Capability configuration switch.</p><li>ON: Enable (default value);</li><li>OFF: Disable.</li>
                     * @return Switch <p>Capability configuration switch.</p><li>ON: Enable (default value);</li><li>OFF: Disable.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>Capability configuration switch.</p><li>ON: Enable (default value);</li><li>OFF: Disable.</li>
                     * @param _switch <p>Capability configuration switch.</p><li>ON: Enable (default value);</li><li>OFF: Disable.</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取<p>Compose model. Available values: compose-1.0-lite (default value, can be omitted).</p>
                     * @return Model <p>Compose model. Available values: compose-1.0-lite (default value, can be omitted).</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>Compose model. Available values: compose-1.0-lite (default value, can be omitted).</p>
                     * @param _model <p>Compose model. Available values: compose-1.0-lite (default value, can be omitted).</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>Canvas definition. Can be omitted: if omitted, the natural size of the layer with the minimum ZIndex (bottom layer) is used.</p>
                     * @return Canvas <p>Canvas definition. Can be omitted: if omitted, the natural size of the layer with the minimum ZIndex (bottom layer) is used.</p>
                     * 
                     */
                    ImageComposeCanvas GetCanvas() const;

                    /**
                     * 设置<p>Canvas definition. Can be omitted: if omitted, the natural size of the layer with the minimum ZIndex (bottom layer) is used.</p>
                     * @param _canvas <p>Canvas definition. Can be omitted: if omitted, the natural size of the layer with the minimum ZIndex (bottom layer) is used.</p>
                     * 
                     */
                    void SetCanvas(const ImageComposeCanvas& _canvas);

                    /**
                     * 判断参数 Canvas 是否已赋值
                     * @return Canvas 是否已赋值
                     * 
                     */
                    bool CanvasHasBeenSet() const;

                    /**
                     * 获取<p>Layer list, the unique source of layers. At least 1 layer and up to 20 layers.</p>
                     * @return Layers <p>Layer list, the unique source of layers. At least 1 layer and up to 20 layers.</p>
                     * 
                     */
                    std::vector<ImageComposeLayer> GetLayers() const;

                    /**
                     * 设置<p>Layer list, the unique source of layers. At least 1 layer and up to 20 layers.</p>
                     * @param _layers <p>Layer list, the unique source of layers. At least 1 layer and up to 20 layers.</p>
                     * 
                     */
                    void SetLayers(const std::vector<ImageComposeLayer>& _layers);

                    /**
                     * 判断参数 Layers 是否已赋值
                     * @return Layers 是否已赋值
                     * 
                     */
                    bool LayersHasBeenSet() const;

                private:

                    /**
                     * <p>Capability configuration switch.</p><li>ON: Enable (default value);</li><li>OFF: Disable.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>Compose model. Available values: compose-1.0-lite (default value, can be omitted).</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>Canvas definition. Can be omitted: if omitted, the natural size of the layer with the minimum ZIndex (bottom layer) is used.</p>
                     */
                    ImageComposeCanvas m_canvas;
                    bool m_canvasHasBeenSet;

                    /**
                     * <p>Layer list, the unique source of layers. At least 1 layer and up to 20 layers.</p>
                     */
                    std::vector<ImageComposeLayer> m_layers;
                    bool m_layersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AICOMPOSECONFIG_H_
