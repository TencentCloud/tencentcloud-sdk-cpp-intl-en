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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CONVERSATIONRESOURCEARTIFACT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CONVERSATIONRESOURCEARTIFACT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/ConversationAppArtifact.h>
#include <tencentcloud/lke/v20231130/model/ConversationWorkflowArtifact.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 
                */
                class ConversationResourceArtifact : public AbstractModel
                {
                public:
                    ConversationResourceArtifact();
                    ~ConversationResourceArtifact() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return App 
                     * 
                     */
                    ConversationAppArtifact GetApp() const;

                    /**
                     * 设置
                     * @param _app 
                     * 
                     */
                    void SetApp(const ConversationAppArtifact& _app);

                    /**
                     * 判断参数 App 是否已赋值
                     * @return App 是否已赋值
                     * 
                     */
                    bool AppHasBeenSet() const;

                    /**
                     * 获取
                     * @return Type 
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置
                     * @param _type 
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Workflow 
                     * 
                     */
                    ConversationWorkflowArtifact GetWorkflow() const;

                    /**
                     * 设置
                     * @param _workflow 
                     * 
                     */
                    void SetWorkflow(const ConversationWorkflowArtifact& _workflow);

                    /**
                     * 判断参数 Workflow 是否已赋值
                     * @return Workflow 是否已赋值
                     * 
                     */
                    bool WorkflowHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    ConversationAppArtifact m_app;
                    bool m_appHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    ConversationWorkflowArtifact m_workflow;
                    bool m_workflowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CONVERSATIONRESOURCEARTIFACT_H_
