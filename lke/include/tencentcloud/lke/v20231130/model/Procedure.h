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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_PROCEDURE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_PROCEDURE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/ProcedureDebugging.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Execution process information log.
                */
                class Procedure : public AbstractModel
                {
                public:
                    Procedure();
                    ~Procedure() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取English name of execution process.
                     * @return Name English name of execution process.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置English name of execution process.
                     * @param _name English name of execution process.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Chinese name for display.
                     * @return Title Chinese name for display.
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Chinese name for display.
                     * @param _title Chinese name for display.
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Status: processing, success, failed.
                     * @return Status Status: processing, success, failed.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status: processing, success, failed.
                     * @param _status Status: processing, success, failed.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Number of consumed tokens.
                     * @return Count Number of consumed tokens.
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Number of consumed tokens.
                     * @param _count Number of consumed tokens.
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Debugging information.
                     * @return Debugging Debugging information.
                     * 
                     */
                    ProcedureDebugging GetDebugging() const;

                    /**
                     * 设置Debugging information.
                     * @param _debugging Debugging information.
                     * 
                     */
                    void SetDebugging(const ProcedureDebugging& _debugging);

                    /**
                     * 判断参数 Debugging 是否已赋值
                     * @return Debugging 是否已赋值
                     * 
                     */
                    bool DebuggingHasBeenSet() const;

                    /**
                     * 获取Billing resource status, 1: available; 2: unavailable.
                     * @return ResourceStatus Billing resource status, 1: available; 2: unavailable.
                     * 
                     */
                    uint64_t GetResourceStatus() const;

                    /**
                     * 设置Billing resource status, 1: available; 2: unavailable.
                     * @param _resourceStatus Billing resource status, 1: available; 2: unavailable.
                     * 
                     */
                    void SetResourceStatus(const uint64_t& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                private:

                    /**
                     * English name of execution process.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Chinese name for display.
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Status: processing, success, failed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Number of consumed tokens.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Debugging information.
                     */
                    ProcedureDebugging m_debugging;
                    bool m_debuggingHasBeenSet;

                    /**
                     * Billing resource status, 1: available; 2: unavailable.
                     */
                    uint64_t m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_PROCEDURE_H_
