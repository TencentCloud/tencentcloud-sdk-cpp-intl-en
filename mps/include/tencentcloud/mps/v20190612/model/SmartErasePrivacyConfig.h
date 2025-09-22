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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASEPRIVACYCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASEPRIVACYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Intelligent erasure template privacy protection configuration.
                */
                class SmartErasePrivacyConfig : public AbstractModel
                {
                public:
                    SmartErasePrivacyConfig();
                    ~SmartErasePrivacyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the privacy protection removal method.
-Blur: specifies the blur detection.
-Specifies the mosaic.
                     * @return PrivacyModel Specifies the privacy protection removal method.
-Blur: specifies the blur detection.
-Specifies the mosaic.
                     * 
                     */
                    std::string GetPrivacyModel() const;

                    /**
                     * 设置Specifies the privacy protection removal method.
-Blur: specifies the blur detection.
-Specifies the mosaic.
                     * @param _privacyModel Specifies the privacy protection removal method.
-Blur: specifies the blur detection.
-Specifies the mosaic.
                     * 
                     */
                    void SetPrivacyModel(const std::string& _privacyModel);

                    /**
                     * 判断参数 PrivacyModel 是否已赋值
                     * @return PrivacyModel 是否已赋值
                     * 
                     */
                    bool PrivacyModelHasBeenSet() const;

                    /**
                     * 获取Privacy protection objective. no need to import an array when in use on API Explorer. just add the corresponding item and fill in the value.
-Human face.
-License plate.
                     * @return PrivacyTargets Privacy protection objective. no need to import an array when in use on API Explorer. just add the corresponding item and fill in the value.
-Human face.
-License plate.
                     * 
                     */
                    std::vector<std::string> GetPrivacyTargets() const;

                    /**
                     * 设置Privacy protection objective. no need to import an array when in use on API Explorer. just add the corresponding item and fill in the value.
-Human face.
-License plate.
                     * @param _privacyTargets Privacy protection objective. no need to import an array when in use on API Explorer. just add the corresponding item and fill in the value.
-Human face.
-License plate.
                     * 
                     */
                    void SetPrivacyTargets(const std::vector<std::string>& _privacyTargets);

                    /**
                     * 判断参数 PrivacyTargets 是否已赋值
                     * @return PrivacyTargets 是否已赋值
                     * 
                     */
                    bool PrivacyTargetsHasBeenSet() const;

                private:

                    /**
                     * Specifies the privacy protection removal method.
-Blur: specifies the blur detection.
-Specifies the mosaic.
                     */
                    std::string m_privacyModel;
                    bool m_privacyModelHasBeenSet;

                    /**
                     * Privacy protection objective. no need to import an array when in use on API Explorer. just add the corresponding item and fill in the value.
-Human face.
-License plate.
                     */
                    std::vector<std::string> m_privacyTargets;
                    bool m_privacyTargetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASEPRIVACYCONFIG_H_
