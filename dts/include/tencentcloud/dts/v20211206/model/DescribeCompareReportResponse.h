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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPAREREPORTRESPONSE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPAREREPORTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/CompareAbstractInfo.h>
#include <tencentcloud/dts/v20211206/model/CompareDetailInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeCompareReport response structure.
                */
                class DescribeCompareReportResponse : public AbstractModel
                {
                public:
                    DescribeCompareReportResponse();
                    ~DescribeCompareReportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Summary information of data consistency check
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Abstract Summary information of data consistency check
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CompareAbstractInfo GetAbstract() const;

                    /**
                     * 判断参数 Abstract 是否已赋值
                     * @return Abstract 是否已赋值
                     * 
                     */
                    bool AbstractHasBeenSet() const;

                    /**
                     * 获取Data consistency check details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Detail Data consistency check details
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CompareDetailInfo GetDetail() const;

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * Summary information of data consistency check
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CompareAbstractInfo m_abstract;
                    bool m_abstractHasBeenSet;

                    /**
                     * Data consistency check details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CompareDetailInfo m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPAREREPORTRESPONSE_H_
