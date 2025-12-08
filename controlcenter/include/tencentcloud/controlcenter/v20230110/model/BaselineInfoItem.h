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

#ifndef TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_BASELINEINFOITEM_H_
#define TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_BASELINEINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Controlcenter
    {
        namespace V20230110
        {
            namespace Model
            {
                /**
                * Account factory baseline information.
                */
                class BaselineInfoItem : public AbstractModel
                {
                public:
                    BaselineInfoItem();
                    ~BaselineInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the unique identifier for account factory baseline item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     * @return Identifier Specifies the unique identifier for account factory baseline item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置Specifies the unique identifier for account factory baseline item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     * @param _identifier Specifies the unique identifier for account factory baseline item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

                    /**
                     * 获取Account factory baseline item configuration. different baseline item configuration parameters.
                     * @return Configuration Account factory baseline item configuration. different baseline item configuration parameters.
                     * 
                     */
                    std::string GetConfiguration() const;

                    /**
                     * 设置Account factory baseline item configuration. different baseline item configuration parameters.
                     * @param _configuration Account factory baseline item configuration. different baseline item configuration parameters.
                     * 
                     */
                    void SetConfiguration(const std::string& _configuration);

                    /**
                     * 判断参数 Configuration 是否已赋值
                     * @return Configuration 是否已赋值
                     * 
                     */
                    bool ConfigurationHasBeenSet() const;

                    /**
                     * 获取Specifies the number of accounts for baseline applications.
                     * @return ApplyCount Specifies the number of accounts for baseline applications.
                     * 
                     */
                    int64_t GetApplyCount() const;

                    /**
                     * 设置Specifies the number of accounts for baseline applications.
                     * @param _applyCount Specifies the number of accounts for baseline applications.
                     * 
                     */
                    void SetApplyCount(const int64_t& _applyCount);

                    /**
                     * 判断参数 ApplyCount 是否已赋值
                     * @return ApplyCount 是否已赋值
                     * 
                     */
                    bool ApplyCountHasBeenSet() const;

                private:

                    /**
                     * Specifies the unique identifier for account factory baseline item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * Account factory baseline item configuration. different baseline item configuration parameters.
                     */
                    std::string m_configuration;
                    bool m_configurationHasBeenSet;

                    /**
                     * Specifies the number of accounts for baseline applications.
                     */
                    int64_t m_applyCount;
                    bool m_applyCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_BASELINEINFOITEM_H_
