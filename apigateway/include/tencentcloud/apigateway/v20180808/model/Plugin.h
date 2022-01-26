/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_PLUGIN_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_PLUGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/AttachedApiInfo.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Details of the API Gateway plugin
                */
                class Plugin : public AbstractModel
                {
                public:
                    Plugin();
                    ~Plugin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Plugin ID
                     * @return PluginId Plugin ID
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置Plugin ID
                     * @param PluginId Plugin ID
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取Plugin name
                     * @return PluginName Plugin name
                     */
                    std::string GetPluginName() const;

                    /**
                     * 设置Plugin name
                     * @param PluginName Plugin name
                     */
                    void SetPluginName(const std::string& _pluginName);

                    /**
                     * 判断参数 PluginName 是否已赋值
                     * @return PluginName 是否已赋值
                     */
                    bool PluginNameHasBeenSet() const;

                    /**
                     * 获取Plugin type
                     * @return PluginType Plugin type
                     */
                    std::string GetPluginType() const;

                    /**
                     * 设置Plugin type
                     * @param PluginType Plugin type
                     */
                    void SetPluginType(const std::string& _pluginType);

                    /**
                     * 判断参数 PluginType 是否已赋值
                     * @return PluginType 是否已赋值
                     */
                    bool PluginTypeHasBeenSet() const;

                    /**
                     * 获取Plugin definition statement
                     * @return PluginData Plugin definition statement
                     */
                    std::string GetPluginData() const;

                    /**
                     * 设置Plugin definition statement
                     * @param PluginData Plugin definition statement
                     */
                    void SetPluginData(const std::string& _pluginData);

                    /**
                     * 判断参数 PluginData 是否已赋值
                     * @return PluginData 是否已赋值
                     */
                    bool PluginDataHasBeenSet() const;

                    /**
                     * 获取Plugin description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Description Plugin description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Plugin description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Description Plugin description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Plugin creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
                     * @return CreatedTime Plugin creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Plugin creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
                     * @param CreatedTime Plugin creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Plugin modification time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used
                     * @return ModifiedTime Plugin modification time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置Plugin modification time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used
                     * @param ModifiedTime Plugin modification time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取Total number of APIs bound with the plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AttachedApiTotalCount Total number of APIs bound with the plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetAttachedApiTotalCount() const;

                    /**
                     * 设置Total number of APIs bound with the plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AttachedApiTotalCount Total number of APIs bound with the plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAttachedApiTotalCount(const int64_t& _attachedApiTotalCount);

                    /**
                     * 判断参数 AttachedApiTotalCount 是否已赋值
                     * @return AttachedApiTotalCount 是否已赋值
                     */
                    bool AttachedApiTotalCountHasBeenSet() const;

                    /**
                     * 获取Information of the API bound with the plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AttachedApis Information of the API bound with the plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AttachedApiInfo> GetAttachedApis() const;

                    /**
                     * 设置Information of the API bound with the plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AttachedApis Information of the API bound with the plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAttachedApis(const std::vector<AttachedApiInfo>& _attachedApis);

                    /**
                     * 判断参数 AttachedApis 是否已赋值
                     * @return AttachedApis 是否已赋值
                     */
                    bool AttachedApisHasBeenSet() const;

                private:

                    /**
                     * Plugin ID
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * Plugin name
                     */
                    std::string m_pluginName;
                    bool m_pluginNameHasBeenSet;

                    /**
                     * Plugin type
                     */
                    std::string m_pluginType;
                    bool m_pluginTypeHasBeenSet;

                    /**
                     * Plugin definition statement
                     */
                    std::string m_pluginData;
                    bool m_pluginDataHasBeenSet;

                    /**
                     * Plugin description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Plugin creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Plugin modification time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * Total number of APIs bound with the plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_attachedApiTotalCount;
                    bool m_attachedApiTotalCountHasBeenSet;

                    /**
                     * Information of the API bound with the plugin
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AttachedApiInfo> m_attachedApis;
                    bool m_attachedApisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_PLUGIN_H_
