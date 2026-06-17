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

#ifndef TENCENTCLOUD_CLB_V20230417_MODEL_CONFIGLISTITEM_H_
#define TENCENTCLOUD_CLB_V20230417_MODEL_CONFIGLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20230417/model/TagInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20230417
        {
            namespace Model
            {
                /**
                * configuration content
                */
                class ConfigListItem : public AbstractModel
                {
                public:
                    ConfigListItem();
                    ~ConfigListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration ID
                     * @return ConfigId Configuration ID
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置Configuration ID
                     * @param _configId Configuration ID
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取Configuration type
                     * @return ConfigType Configuration type
                     * 
                     */
                    std::string GetConfigType() const;

                    /**
                     * 设置Configuration type
                     * @param _configType Configuration type
                     * 
                     */
                    void SetConfigType(const std::string& _configType);

                    /**
                     * 判断参数 ConfigType 是否已赋值
                     * @return ConfigType 是否已赋值
                     * 
                     */
                    bool ConfigTypeHasBeenSet() const;

                    /**
                     * 获取Configuration name
                     * @return ConfigName Configuration name
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置Configuration name
                     * @param _configName Configuration name
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取Configuration content
                     * @return ConfigContent Configuration content
                     * 
                     */
                    std::string GetConfigContent() const;

                    /**
                     * 设置Configuration content
                     * @param _configContent Configuration content
                     * 
                     */
                    void SetConfigContent(const std::string& _configContent);

                    /**
                     * 判断参数 ConfigContent 是否已赋值
                     * @return ConfigContent 是否已赋值
                     * 
                     */
                    bool ConfigContentHasBeenSet() const;

                    /**
                     * 获取Configuration creation time
                     * @return CreateTimestamp Configuration creation time
                     * 
                     */
                    std::string GetCreateTimestamp() const;

                    /**
                     * 设置Configuration creation time
                     * @param _createTimestamp Configuration creation time
                     * 
                     */
                    void SetCreateTimestamp(const std::string& _createTimestamp);

                    /**
                     * 判断参数 CreateTimestamp 是否已赋值
                     * @return CreateTimestamp 是否已赋值
                     * 
                     */
                    bool CreateTimestampHasBeenSet() const;

                    /**
                     * 获取Configuration modification time
                     * @return UpdateTimestamp Configuration modification time
                     * 
                     */
                    std::string GetUpdateTimestamp() const;

                    /**
                     * 设置Configuration modification time
                     * @param _updateTimestamp Configuration modification time
                     * 
                     */
                    void SetUpdateTimestamp(const std::string& _updateTimestamp);

                    /**
                     * 判断参数 UpdateTimestamp 是否已赋值
                     * @return UpdateTimestamp 是否已赋值
                     * 
                     */
                    bool UpdateTimestampHasBeenSet() const;

                    /**
                     * 获取Tag.
                     * @return Tag Tag.
                     * 
                     */
                    std::vector<TagInfo> GetTag() const;

                    /**
                     * 设置Tag.
                     * @param _tag Tag.
                     * 
                     */
                    void SetTag(const std::vector<TagInfo>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * Configuration ID
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * Configuration type
                     */
                    std::string m_configType;
                    bool m_configTypeHasBeenSet;

                    /**
                     * Configuration name
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * Configuration content
                     */
                    std::string m_configContent;
                    bool m_configContentHasBeenSet;

                    /**
                     * Configuration creation time
                     */
                    std::string m_createTimestamp;
                    bool m_createTimestampHasBeenSet;

                    /**
                     * Configuration modification time
                     */
                    std::string m_updateTimestamp;
                    bool m_updateTimestampHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::vector<TagInfo> m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20230417_MODEL_CONFIGLISTITEM_H_
