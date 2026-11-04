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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TOOLCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TOOLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ApiToolConfig.h>
#include <tencentcloud/adp/v20260520/model/AppToolConfig.h>
#include <tencentcloud/adp/v20260520/model/CodeToolConfig.h>
#include <tencentcloud/adp/v20260520/model/MCPToolConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ToolConfig
                */
                class ToolConfig : public AbstractModel
                {
                public:
                    ToolConfig();
                    ~ToolConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>API tool configuration message.</p>
                     * @return ApiToolConfig <p>API tool configuration message.</p>
                     * 
                     */
                    ApiToolConfig GetApiToolConfig() const;

                    /**
                     * 设置<p>API tool configuration message.</p>
                     * @param _apiToolConfig <p>API tool configuration message.</p>
                     * 
                     */
                    void SetApiToolConfig(const ApiToolConfig& _apiToolConfig);

                    /**
                     * 判断参数 ApiToolConfig 是否已赋值
                     * @return ApiToolConfig 是否已赋值
                     * 
                     */
                    bool ApiToolConfigHasBeenSet() const;

                    /**
                     * 获取<p>Application configuration information</p>
                     * @return AppToolConfig <p>Application configuration information</p>
                     * 
                     */
                    AppToolConfig GetAppToolConfig() const;

                    /**
                     * 设置<p>Application configuration information</p>
                     * @param _appToolConfig <p>Application configuration information</p>
                     * 
                     */
                    void SetAppToolConfig(const AppToolConfig& _appToolConfig);

                    /**
                     * 判断参数 AppToolConfig 是否已赋值
                     * @return AppToolConfig 是否已赋值
                     * 
                     */
                    bool AppToolConfigHasBeenSet() const;

                    /**
                     * 获取<p>Code tool configuration message</p>
                     * @return CodeToolConfig <p>Code tool configuration message</p>
                     * 
                     */
                    CodeToolConfig GetCodeToolConfig() const;

                    /**
                     * 设置<p>Code tool configuration message</p>
                     * @param _codeToolConfig <p>Code tool configuration message</p>
                     * 
                     */
                    void SetCodeToolConfig(const CodeToolConfig& _codeToolConfig);

                    /**
                     * 判断参数 CodeToolConfig 是否已赋值
                     * @return CodeToolConfig 是否已赋值
                     * 
                     */
                    bool CodeToolConfigHasBeenSet() const;

                    /**
                     * 获取<p>Configuration information of the MCP tool</p>
                     * @return MCPToolConfig <p>Configuration information of the MCP tool</p>
                     * 
                     */
                    MCPToolConfig GetMCPToolConfig() const;

                    /**
                     * 设置<p>Configuration information of the MCP tool</p>
                     * @param _mCPToolConfig <p>Configuration information of the MCP tool</p>
                     * 
                     */
                    void SetMCPToolConfig(const MCPToolConfig& _mCPToolConfig);

                    /**
                     * 判断参数 MCPToolConfig 是否已赋值
                     * @return MCPToolConfig 是否已赋值
                     * 
                     */
                    bool MCPToolConfigHasBeenSet() const;

                private:

                    /**
                     * <p>API tool configuration message.</p>
                     */
                    ApiToolConfig m_apiToolConfig;
                    bool m_apiToolConfigHasBeenSet;

                    /**
                     * <p>Application configuration information</p>
                     */
                    AppToolConfig m_appToolConfig;
                    bool m_appToolConfigHasBeenSet;

                    /**
                     * <p>Code tool configuration message</p>
                     */
                    CodeToolConfig m_codeToolConfig;
                    bool m_codeToolConfigHasBeenSet;

                    /**
                     * <p>Configuration information of the MCP tool</p>
                     */
                    MCPToolConfig m_mCPToolConfig;
                    bool m_mCPToolConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TOOLCONFIG_H_
