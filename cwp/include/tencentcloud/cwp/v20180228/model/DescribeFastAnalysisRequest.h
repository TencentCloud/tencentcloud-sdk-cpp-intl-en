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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFASTANALYSISREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFASTANALYSISREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeFastAnalysis request structure.
                */
                class DescribeFastAnalysisRequest : public AbstractModel
                {
                public:
                    DescribeFastAnalysisRequest();
                    ~DescribeFastAnalysisRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time. Unit: ms.
                     * @return From Start time. Unit: ms.
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置Start time. Unit: ms.
                     * @param _from Start time. Unit: ms.
                     * 
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取End time. Unit: ms.
                     * @return To End time. Unit: ms.
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置End time. Unit: ms.
                     * @param _to End time. Unit: ms.
                     * 
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取Query statement, up to 4096 in statement length
                     * @return Query Query statement, up to 4096 in statement length
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query statement, up to 4096 in statement length
                     * @param _query Query statement, up to 4096 in statement length
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取Log field name
                     * @return FieldName Log field name
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置Log field name
                     * @param _fieldName Log field name
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                private:

                    /**
                     * Start time. Unit: ms.
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * End time. Unit: ms.
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * Query statement, up to 4096 in statement length
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Log field name
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFASTANALYSISREQUEST_H_
