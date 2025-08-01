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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTSECURITYTRENDSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTSECURITYTRENDSREQUEST_H_

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
                * ExportSecurityTrends request structure.
                */
                class ExportSecurityTrendsRequest : public AbstractModel
                {
                public:
                    ExportSecurityTrendsRequest();
                    ~ExportSecurityTrendsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time
                     * @return BeginDate Start time
                     * 
                     */
                    std::string GetBeginDate() const;

                    /**
                     * 设置Start time
                     * @param _beginDate Start time
                     * 
                     */
                    void SetBeginDate(const std::string& _beginDate);

                    /**
                     * 判断参数 BeginDate 是否已赋值
                     * @return BeginDate 是否已赋值
                     * 
                     */
                    bool BeginDateHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndDate End time
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置End time
                     * @param _endDate End time
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                private:

                    /**
                     * Start time
                     */
                    std::string m_beginDate;
                    bool m_beginDateHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTSECURITYTRENDSREQUEST_H_
