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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEPLUGINREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEPLUGINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/FieldMask.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribePlugin request structure.
                */
                class DescribePluginRequest : public AbstractModel
                {
                public:
                    DescribePluginRequest();
                    ~DescribePluginRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Plugin id</p>
                     * @return PluginId <p>Plugin id</p>
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置<p>Plugin id</p>
                     * @param _pluginId <p>Plugin id</p>
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
                     * 获取<p>Current space id</p>
                     * @return SpaceId <p>Current space id</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>Current space id</p>
                     * @param _spaceId <p>Current space id</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>Get the specified field</p>
                     * @return FieldMask <p>Get the specified field</p>
                     * 
                     */
                    FieldMask GetFieldMask() const;

                    /**
                     * 设置<p>Get the specified field</p>
                     * @param _fieldMask <p>Get the specified field</p>
                     * 
                     */
                    void SetFieldMask(const FieldMask& _fieldMask);

                    /**
                     * 判断参数 FieldMask 是否已赋值
                     * @return FieldMask 是否已赋值
                     * 
                     */
                    bool FieldMaskHasBeenSet() const;

                    /**
                     * 获取<p>Plug-in display scenario. If not passed or set to 0, the scenario is not limited.</p><p>Enumeration values:</p><ul><li>0: Not limited</li><li>1: Agent Mode</li><li>2: Workflow</li><li>3: Intelligent workbench</li></ul>
                     * @return Module <p>Plug-in display scenario. If not passed or set to 0, the scenario is not limited.</p><p>Enumeration values:</p><ul><li>0: Not limited</li><li>1: Agent Mode</li><li>2: Workflow</li><li>3: Intelligent workbench</li></ul>
                     * 
                     */
                    int64_t GetModule() const;

                    /**
                     * 设置<p>Plug-in display scenario. If not passed or set to 0, the scenario is not limited.</p><p>Enumeration values:</p><ul><li>0: Not limited</li><li>1: Agent Mode</li><li>2: Workflow</li><li>3: Intelligent workbench</li></ul>
                     * @param _module <p>Plug-in display scenario. If not passed or set to 0, the scenario is not limited.</p><p>Enumeration values:</p><ul><li>0: Not limited</li><li>1: Agent Mode</li><li>2: Workflow</li><li>3: Intelligent workbench</li></ul>
                     * 
                     */
                    void SetModule(const int64_t& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                private:

                    /**
                     * <p>Plugin id</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>Current space id</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>Get the specified field</p>
                     */
                    FieldMask m_fieldMask;
                    bool m_fieldMaskHasBeenSet;

                    /**
                     * <p>Plug-in display scenario. If not passed or set to 0, the scenario is not limited.</p><p>Enumeration values:</p><ul><li>0: Not limited</li><li>1: Agent Mode</li><li>2: Workflow</li><li>3: Intelligent workbench</li></ul>
                     */
                    int64_t m_module;
                    bool m_moduleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEPLUGINREQUEST_H_
