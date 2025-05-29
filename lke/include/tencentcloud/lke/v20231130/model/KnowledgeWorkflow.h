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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEWORKFLOW_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEWORKFLOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Q&A knowledge library workflow configuration.
                */
                class KnowledgeWorkflow : public AbstractModel
                {
                public:
                    KnowledgeWorkflow();
                    ~KnowledgeWorkflow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable the workflow.
                     * @return IsEnabled Whether to enable the workflow.
                     * 
                     */
                    bool GetIsEnabled() const;

                    /**
                     * 设置Whether to enable the workflow.
                     * @param _isEnabled Whether to enable the workflow.
                     * 
                     */
                    void SetIsEnabled(const bool& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取Whether to enable PDL.
                     * @return UsePdl Whether to enable PDL.
                     * 
                     */
                    bool GetUsePdl() const;

                    /**
                     * 设置Whether to enable PDL.
                     * @param _usePdl Whether to enable PDL.
                     * 
                     */
                    void SetUsePdl(const bool& _usePdl);

                    /**
                     * 判断参数 UsePdl 是否已赋值
                     * @return UsePdl 是否已赋值
                     * 
                     */
                    bool UsePdlHasBeenSet() const;

                private:

                    /**
                     * Whether to enable the workflow.
                     */
                    bool m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * Whether to enable PDL.
                     */
                    bool m_usePdl;
                    bool m_usePdlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEWORKFLOW_H_
