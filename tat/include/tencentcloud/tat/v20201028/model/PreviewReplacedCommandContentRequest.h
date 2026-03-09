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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_PREVIEWREPLACEDCOMMANDCONTENTREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_PREVIEWREPLACEDCOMMANDCONTENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * PreviewReplacedCommandContent request structure.
                */
                class PreviewReplacedCommandContentRequest : public AbstractModel
                {
                public:
                    PreviewReplacedCommandContentRequest();
                    ~PreviewReplacedCommandContentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The preview uses custom parameters. field type is json encoded string, for example: {"varA": "222"}.
This parameter can be set only when the EnableParameter of the command is true. you can obtain the EnableParameter settings through the [DescribeCommands (detailed command information)](https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1) api.
If DefaultParameters or DefaultParameterConfs has set, it will overlay with Parameters and prioritize the value of Parameters.

key specifies the custom parameter name, and value specifies the parameter. both kv are string-type.
Custom parameters are limited to 20.
The custom parameter name must meet the following standard: the number of characters has a cap of 64, and the optional range is [a-zA-Z0-9-_].
If the previewed CommandId has DefaultParameters set, this parameter can be empty.
                     * @return Parameters The preview uses custom parameters. field type is json encoded string, for example: {"varA": "222"}.
This parameter can be set only when the EnableParameter of the command is true. you can obtain the EnableParameter settings through the [DescribeCommands (detailed command information)](https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1) api.
If DefaultParameters or DefaultParameterConfs has set, it will overlay with Parameters and prioritize the value of Parameters.

key specifies the custom parameter name, and value specifies the parameter. both kv are string-type.
Custom parameters are limited to 20.
The custom parameter name must meet the following standard: the number of characters has a cap of 64, and the optional range is [a-zA-Z0-9-_].
If the previewed CommandId has DefaultParameters set, this parameter can be empty.
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置The preview uses custom parameters. field type is json encoded string, for example: {"varA": "222"}.
This parameter can be set only when the EnableParameter of the command is true. you can obtain the EnableParameter settings through the [DescribeCommands (detailed command information)](https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1) api.
If DefaultParameters or DefaultParameterConfs has set, it will overlay with Parameters and prioritize the value of Parameters.

key specifies the custom parameter name, and value specifies the parameter. both kv are string-type.
Custom parameters are limited to 20.
The custom parameter name must meet the following standard: the number of characters has a cap of 64, and the optional range is [a-zA-Z0-9-_].
If the previewed CommandId has DefaultParameters set, this parameter can be empty.
                     * @param _parameters The preview uses custom parameters. field type is json encoded string, for example: {"varA": "222"}.
This parameter can be set only when the EnableParameter of the command is true. you can obtain the EnableParameter settings through the [DescribeCommands (detailed command information)](https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1) api.
If DefaultParameters or DefaultParameterConfs has set, it will overlay with Parameters and prioritize the value of Parameters.

key specifies the custom parameter name, and value specifies the parameter. both kv are string-type.
Custom parameters are limited to 20.
The custom parameter name must meet the following standard: the number of characters has a cap of 64, and the optional range is [a-zA-Z0-9-_].
If the previewed CommandId has DefaultParameters set, this parameter can be empty.
                     * 
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取Perform the replace preview command.
Call the [DescribeCommands](https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1) api to query command details.
CommandId and Content, you must provide one and can only provide one.
                     * @return CommandId Perform the replace preview command.
Call the [DescribeCommands](https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1) api to query command details.
CommandId and Content, you must provide one and can only provide one.
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置Perform the replace preview command.
Call the [DescribeCommands](https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1) api to query command details.
CommandId and Content, you must provide one and can only provide one.
                     * @param _commandId Perform the replace preview command.
Call the [DescribeCommands](https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1) api to query command details.
CommandId and Content, you must provide one and can only provide one.
                     * 
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     * 
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取Base64-encoded command to be previewed. The maximum length is 64 KB.
CommandId or Content must be specified.
                     * @return Content Base64-encoded command to be previewed. The maximum length is 64 KB.
CommandId or Content must be specified.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Base64-encoded command to be previewed. The maximum length is 64 KB.
CommandId or Content must be specified.
                     * @param _content Base64-encoded command to be previewed. The maximum length is 64 KB.
CommandId or Content must be specified.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * The preview uses custom parameters. field type is json encoded string, for example: {"varA": "222"}.
This parameter can be set only when the EnableParameter of the command is true. you can obtain the EnableParameter settings through the [DescribeCommands (detailed command information)](https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1) api.
If DefaultParameters or DefaultParameterConfs has set, it will overlay with Parameters and prioritize the value of Parameters.

key specifies the custom parameter name, and value specifies the parameter. both kv are string-type.
Custom parameters are limited to 20.
The custom parameter name must meet the following standard: the number of characters has a cap of 64, and the optional range is [a-zA-Z0-9-_].
If the previewed CommandId has DefaultParameters set, this parameter can be empty.
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * Perform the replace preview command.
Call the [DescribeCommands](https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1) api to query command details.
CommandId and Content, you must provide one and can only provide one.
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * Base64-encoded command to be previewed. The maximum length is 64 KB.
CommandId or Content must be specified.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_PREVIEWREPLACEDCOMMANDCONTENTREQUEST_H_
