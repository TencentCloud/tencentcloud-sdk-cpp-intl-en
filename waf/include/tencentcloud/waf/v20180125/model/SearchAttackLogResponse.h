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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHATTACKLOGRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHATTACKLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/AttackLogInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * SearchAttackLog response structure.
                */
                class SearchAttackLogResponse : public AbstractModel
                {
                public:
                    SearchAttackLogResponse();
                    ~SearchAttackLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of attack logs returned
                     * @return Count Number of attack logs returned
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取API upgrade: this field is invalid, defaults to returning an empty string
                     * @return Context API upgrade: this field is invalid, defaults to returning an empty string
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取Attack log array entry content
                     * @return Data Attack log array entry content
                     * 
                     */
                    std::vector<AttackLogInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取CLS API returned content
                     * @return ListOver CLS API returned content
                     * 
                     */
                    bool GetListOver() const;

                    /**
                     * 判断参数 ListOver 是否已赋值
                     * @return ListOver 是否已赋值
                     * 
                     */
                    bool ListOverHasBeenSet() const;

                    /**
                     * 获取CLS API returned content, indicating whether to enable the new version index
                     * @return SqlFlag CLS API returned content, indicating whether to enable the new version index
                     * 
                     */
                    bool GetSqlFlag() const;

                    /**
                     * 判断参数 SqlFlag 是否已赋值
                     * @return SqlFlag 是否已赋值
                     * 
                     */
                    bool SqlFlagHasBeenSet() const;

                private:

                    /**
                     * Number of attack logs returned
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * API upgrade: this field is invalid, defaults to returning an empty string
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Attack log array entry content
                     */
                    std::vector<AttackLogInfo> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * CLS API returned content
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * CLS API returned content, indicating whether to enable the new version index
                     */
                    bool m_sqlFlag;
                    bool m_sqlFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHATTACKLOGRESPONSE_H_
