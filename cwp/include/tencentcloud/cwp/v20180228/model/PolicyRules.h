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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_POLICYRULES_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_POLICYRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/CommandLine.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Policy rule expression.
                */
                class PolicyRules : public AbstractModel
                {
                public:
                    PolicyRules();
                    ~PolicyRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Process
                     * @return Process Process
                     * 
                     */
                    CommandLine GetProcess() const;

                    /**
                     * 设置Process
                     * @param _process Process
                     * 
                     */
                    void SetProcess(const CommandLine& _process);

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     * 
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取Parent process
                     * @return PProcess Parent process
                     * 
                     */
                    CommandLine GetPProcess() const;

                    /**
                     * 设置Parent process
                     * @param _pProcess Parent process
                     * 
                     */
                    void SetPProcess(const CommandLine& _pProcess);

                    /**
                     * 判断参数 PProcess 是否已赋值
                     * @return PProcess 是否已赋值
                     * 
                     */
                    bool PProcessHasBeenSet() const;

                    /**
                     * 获取Ancestor process
                     * @return AProcess Ancestor process
                     * 
                     */
                    CommandLine GetAProcess() const;

                    /**
                     * 设置Ancestor process
                     * @param _aProcess Ancestor process
                     * 
                     */
                    void SetAProcess(const CommandLine& _aProcess);

                    /**
                     * 判断参数 AProcess 是否已赋值
                     * @return AProcess 是否已赋值
                     * 
                     */
                    bool AProcessHasBeenSet() const;

                private:

                    /**
                     * Process
                     */
                    CommandLine m_process;
                    bool m_processHasBeenSet;

                    /**
                     * Parent process
                     */
                    CommandLine m_pProcess;
                    bool m_pProcessHasBeenSet;

                    /**
                     * Ancestor process
                     */
                    CommandLine m_aProcess;
                    bool m_aProcessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_POLICYRULES_H_
