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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_UPDATESMARTERASEPRIVACYCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_UPDATESMARTERASEPRIVACYCONFIG_H_

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
                * Privacy protection configuration for the smart erasing template.
                */
                class UpdateSmartErasePrivacyConfig : public AbstractModel
                {
                public:
                    UpdateSmartErasePrivacyConfig();
                    ~UpdateSmartErasePrivacyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Erasing method of privacy protection.
- blur
- mosaic
                     * @return PrivacyModel Erasing method of privacy protection.
- blur
- mosaic
                     * 
                     */
                    std::string GetPrivacyModel() const;

                    /**
                     * 设置Erasing method of privacy protection.
- blur
- mosaic
                     * @param _privacyModel Erasing method of privacy protection.
- blur
- mosaic
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
                     * 获取Privacy protection target. (When API Explorer is used, it is not required to specify an array. Add the corresponding items and enter the corresponding values.)
- face: human face.
- plate: license plate.
                     * @return PrivacyTargets Privacy protection target. (When API Explorer is used, it is not required to specify an array. Add the corresponding items and enter the corresponding values.)
- face: human face.
- plate: license plate.
                     * 
                     */
                    std::vector<std::string> GetPrivacyTargets() const;

                    /**
                     * 设置Privacy protection target. (When API Explorer is used, it is not required to specify an array. Add the corresponding items and enter the corresponding values.)
- face: human face.
- plate: license plate.
                     * @param _privacyTargets Privacy protection target. (When API Explorer is used, it is not required to specify an array. Add the corresponding items and enter the corresponding values.)
- face: human face.
- plate: license plate.
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
                     * Erasing method of privacy protection.
- blur
- mosaic
                     */
                    std::string m_privacyModel;
                    bool m_privacyModelHasBeenSet;

                    /**
                     * Privacy protection target. (When API Explorer is used, it is not required to specify an array. Add the corresponding items and enter the corresponding values.)
- face: human face.
- plate: license plate.
                     */
                    std::vector<std::string> m_privacyTargets;
                    bool m_privacyTargetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_UPDATESMARTERASEPRIVACYCONFIG_H_
