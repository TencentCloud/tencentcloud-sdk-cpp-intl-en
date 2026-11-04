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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_LABELTERMCHECKRESULT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_LABELTERMCHECKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/CheckResult.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Standard word check item
                */
                class LabelTermCheckResult : public AbstractModel
                {
                public:
                    LabelTermCheckResult();
                    ~LabelTermCheckResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Check results
                     * @return CheckResult Check results
                     * 
                     */
                    CheckResult GetCheckResult() const;

                    /**
                     * 设置Check results
                     * @param _checkResult Check results
                     * 
                     */
                    void SetCheckResult(const CheckResult& _checkResult);

                    /**
                     * 判断参数 CheckResult 是否已赋值
                     * @return CheckResult 是否已赋值
                     * 
                     */
                    bool CheckResultHasBeenSet() const;

                    /**
                     * 获取Standard words to be checked
                     * @return Term Standard words to be checked
                     * 
                     */
                    std::string GetTerm() const;

                    /**
                     * 设置Standard words to be checked
                     * @param _term Standard words to be checked
                     * 
                     */
                    void SetTerm(const std::string& _term);

                    /**
                     * 判断参数 Term 是否已赋值
                     * @return Term 是否已赋值
                     * 
                     */
                    bool TermHasBeenSet() const;

                    /**
                     * 获取Return the corresponding standard term ID if exists.
                     * @return TermId Return the corresponding standard term ID if exists.
                     * 
                     */
                    std::string GetTermId() const;

                    /**
                     * 设置Return the corresponding standard term ID if exists.
                     * @param _termId Return the corresponding standard term ID if exists.
                     * 
                     */
                    void SetTermId(const std::string& _termId);

                    /**
                     * 判断参数 TermId 是否已赋值
                     * @return TermId 是否已赋值
                     * 
                     */
                    bool TermIdHasBeenSet() const;

                private:

                    /**
                     * Check results
                     */
                    CheckResult m_checkResult;
                    bool m_checkResultHasBeenSet;

                    /**
                     * Standard words to be checked
                     */
                    std::string m_term;
                    bool m_termHasBeenSet;

                    /**
                     * Return the corresponding standard term ID if exists.
                     */
                    std::string m_termId;
                    bool m_termIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_LABELTERMCHECKRESULT_H_
