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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTCMDLINE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTCMDLINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RuleContentProcessInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * EDR command-line rule.
                */
                class RuleContentCmdLine : public AbstractModel
                {
                public:
                    RuleContentCmdLine();
                    ~RuleContentCmdLine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Process command line information</p>
                     * @return Process <p>Process command line information</p>
                     * 
                     */
                    RuleContentProcessInfo GetProcess() const;

                    /**
                     * 设置<p>Process command line information</p>
                     * @param _process <p>Process command line information</p>
                     * 
                     */
                    void SetProcess(const RuleContentProcessInfo& _process);

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     * 
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取<p>Command line information of the parent process</p>
                     * @return ParentProcess <p>Command line information of the parent process</p>
                     * 
                     */
                    RuleContentProcessInfo GetParentProcess() const;

                    /**
                     * 设置<p>Command line information of the parent process</p>
                     * @param _parentProcess <p>Command line information of the parent process</p>
                     * 
                     */
                    void SetParentProcess(const RuleContentProcessInfo& _parentProcess);

                    /**
                     * 判断参数 ParentProcess 是否已赋值
                     * @return ParentProcess 是否已赋值
                     * 
                     */
                    bool ParentProcessHasBeenSet() const;

                    /**
                     * 获取<p>Command line information of the ancestor process</p>
                     * @return AncestorProcess <p>Command line information of the ancestor process</p>
                     * 
                     */
                    RuleContentProcessInfo GetAncestorProcess() const;

                    /**
                     * 设置<p>Command line information of the ancestor process</p>
                     * @param _ancestorProcess <p>Command line information of the ancestor process</p>
                     * 
                     */
                    void SetAncestorProcess(const RuleContentProcessInfo& _ancestorProcess);

                    /**
                     * 判断参数 AncestorProcess 是否已赋值
                     * @return AncestorProcess 是否已赋值
                     * 
                     */
                    bool AncestorProcessHasBeenSet() const;

                private:

                    /**
                     * <p>Process command line information</p>
                     */
                    RuleContentProcessInfo m_process;
                    bool m_processHasBeenSet;

                    /**
                     * <p>Command line information of the parent process</p>
                     */
                    RuleContentProcessInfo m_parentProcess;
                    bool m_parentProcessHasBeenSet;

                    /**
                     * <p>Command line information of the ancestor process</p>
                     */
                    RuleContentProcessInfo m_ancestorProcess;
                    bool m_ancestorProcessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTCMDLINE_H_
