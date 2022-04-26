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
                     * 获取Custom parameters for the preview. The field type is JSON encoded string. For example, {\"varA\": \"222\"}.
`key` is the name of the custom parameter and "value" is its specified value. Both "key" and "value" are strings.
At most 20 custom parameters are supported.
The name of the custom parameter cannot exceed 64 characters and can only contain [a-z], [A-Z], [0-9], [-_].
This parameter can be left empty if DefaultParameters is set for the previewed CommandId.
                     * @return Parameters Custom parameters for the preview. The field type is JSON encoded string. For example, {\"varA\": \"222\"}.
`key` is the name of the custom parameter and "value" is its specified value. Both "key" and "value" are strings.
At most 20 custom parameters are supported.
The name of the custom parameter cannot exceed 64 characters and can only contain [a-z], [A-Z], [0-9], [-_].
This parameter can be left empty if DefaultParameters is set for the previewed CommandId.
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置Custom parameters for the preview. The field type is JSON encoded string. For example, {\"varA\": \"222\"}.
`key` is the name of the custom parameter and "value" is its specified value. Both "key" and "value" are strings.
At most 20 custom parameters are supported.
The name of the custom parameter cannot exceed 64 characters and can only contain [a-z], [A-Z], [0-9], [-_].
This parameter can be left empty if DefaultParameters is set for the previewed CommandId.
                     * @param Parameters Custom parameters for the preview. The field type is JSON encoded string. For example, {\"varA\": \"222\"}.
`key` is the name of the custom parameter and "value" is its specified value. Both "key" and "value" are strings.
At most 20 custom parameters are supported.
The name of the custom parameter cannot exceed 64 characters and can only contain [a-z], [A-Z], [0-9], [-_].
This parameter can be left empty if DefaultParameters is set for the previewed CommandId.
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取The command to be previewed. If DefaultParameters is set, it is combined with Parameters and Parameters takes priority.
`CommandId` or `Content` must be specified.
                     * @return CommandId The command to be previewed. If DefaultParameters is set, it is combined with Parameters and Parameters takes priority.
`CommandId` or `Content` must be specified.
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置The command to be previewed. If DefaultParameters is set, it is combined with Parameters and Parameters takes priority.
`CommandId` or `Content` must be specified.
                     * @param CommandId The command to be previewed. If DefaultParameters is set, it is combined with Parameters and Parameters takes priority.
`CommandId` or `Content` must be specified.
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取Base64-encoded command to be previewed. The maximum length is 64 KB.
CommandId or Content must be specified.
                     * @return Content Base64-encoded command to be previewed. The maximum length is 64 KB.
CommandId or Content must be specified.
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Base64-encoded command to be previewed. The maximum length is 64 KB.
CommandId or Content must be specified.
                     * @param Content Base64-encoded command to be previewed. The maximum length is 64 KB.
CommandId or Content must be specified.
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * Custom parameters for the preview. The field type is JSON encoded string. For example, {\"varA\": \"222\"}.
`key` is the name of the custom parameter and "value" is its specified value. Both "key" and "value" are strings.
At most 20 custom parameters are supported.
The name of the custom parameter cannot exceed 64 characters and can only contain [a-z], [A-Z], [0-9], [-_].
This parameter can be left empty if DefaultParameters is set for the previewed CommandId.
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * The command to be previewed. If DefaultParameters is set, it is combined with Parameters and Parameters takes priority.
`CommandId` or `Content` must be specified.
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
