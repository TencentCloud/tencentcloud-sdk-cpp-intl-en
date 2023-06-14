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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHEDPLUGININFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHEDPLUGININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Information of bound plug-ins
                */
                class AttachedPluginInfo : public AbstractModel
                {
                public:
                    AttachedPluginInfo();
                    ~AttachedPluginInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Plugin ID
                     * @return PluginId Plugin ID
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置Plugin ID
                     * @param _pluginId Plugin ID
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取Environment information
                     * @return Environment Environment information
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置Environment information
                     * @param _environment Environment information
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取Binding time
                     * @return AttachedTime Binding time
                     * 
                     */
                    std::string GetAttachedTime() const;

                    /**
                     * 设置Binding time
                     * @param _attachedTime Binding time
                     * 
                     */
                    void SetAttachedTime(const std::string& _attachedTime);

                    /**
                     * 判断参数 AttachedTime 是否已赋值
                     * @return AttachedTime 是否已赋值
                     * 
                     */
                    bool AttachedTimeHasBeenSet() const;

                    /**
                     * 获取Plugin name
                     * @return PluginName Plugin name
                     * 
                     */
                    std::string GetPluginName() const;

                    /**
                     * 设置Plugin name
                     * @param _pluginName Plugin name
                     * 
                     */
                    void SetPluginName(const std::string& _pluginName);

                    /**
                     * 判断参数 PluginName 是否已赋值
                     * @return PluginName 是否已赋值
                     * 
                     */
                    bool PluginNameHasBeenSet() const;

                    /**
                     * 获取Plugin type
                     * @return PluginType Plugin type
                     * 
                     */
                    std::string GetPluginType() const;

                    /**
                     * 设置Plugin type
                     * @param _pluginType Plugin type
                     * 
                     */
                    void SetPluginType(const std::string& _pluginType);

                    /**
                     * 判断参数 PluginType 是否已赋值
                     * @return PluginType 是否已赋值
                     * 
                     */
                    bool PluginTypeHasBeenSet() const;

                    /**
                     * 获取Plugin description
                     * @return Description Plugin description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Plugin description
                     * @param _description Plugin description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Plugin definition statement
                     * @return PluginData Plugin definition statement
                     * 
                     */
                    std::string GetPluginData() const;

                    /**
                     * 设置Plugin definition statement
                     * @param _pluginData Plugin definition statement
                     * 
                     */
                    void SetPluginData(const std::string& _pluginData);

                    /**
                     * 判断参数 PluginData 是否已赋值
                     * @return PluginData 是否已赋值
                     * 
                     */
                    bool PluginDataHasBeenSet() const;

                private:

                    /**
                     * Plugin ID
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * Environment information
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * Binding time
                     */
                    std::string m_attachedTime;
                    bool m_attachedTimeHasBeenSet;

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
                     * Plugin description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Plugin definition statement
                     */
                    std::string m_pluginData;
                    bool m_pluginDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHEDPLUGININFO_H_
