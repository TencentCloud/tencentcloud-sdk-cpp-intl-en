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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEVULLAYERINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEVULLAYERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 
                */
                class ImageVulLayerInfo : public AbstractModel
                {
                public:
                    ImageVulLayerInfo();
                    ~ImageVulLayerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Layer ID
                     * @return LayerId Layer ID
                     * 
                     */
                    std::string GetLayerId() const;

                    /**
                     * 设置Layer ID
                     * @param _layerId Layer ID
                     * 
                     */
                    void SetLayerId(const std::string& _layerId);

                    /**
                     * 判断参数 LayerId 是否已赋值
                     * @return LayerId 是否已赋值
                     * 
                     */
                    bool LayerIdHasBeenSet() const;

                    /**
                     * 获取Layer CMD
                     * @return LayerCmd Layer CMD
                     * 
                     */
                    std::string GetLayerCmd() const;

                    /**
                     * 设置Layer CMD
                     * @param _layerCmd Layer CMD
                     * 
                     */
                    void SetLayerCmd(const std::string& _layerCmd);

                    /**
                     * 判断参数 LayerCmd 是否已赋值
                     * @return LayerCmd 是否已赋值
                     * 
                     */
                    bool LayerCmdHasBeenSet() const;

                private:

                    /**
                     * Layer ID
                     */
                    std::string m_layerId;
                    bool m_layerIdHasBeenSet;

                    /**
                     * Layer CMD
                     */
                    std::string m_layerCmd;
                    bool m_layerCmdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEVULLAYERINFO_H_
