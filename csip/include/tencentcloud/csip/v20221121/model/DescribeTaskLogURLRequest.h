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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETASKLOGURLREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETASKLOGURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ReportItemKey.h>
#include <tencentcloud/csip/v20221121/model/ReportTaskIdList.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeTaskLogURL request structure.
                */
                class DescribeTaskLogURLRequest : public AbstractModel
                {
                public:
                    DescribeTaskLogURLRequest();
                    ~DescribeTaskLogURLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0: Preview; 1: Download
                     * @return Type 0: Preview; 1: Download
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置0: Preview; 1: Download
                     * @param _type 0: Preview; 1: Download
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
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Task Report ID List
                     * @return ReportItemKeyList Task Report ID List
                     * 
                     */
                    std::vector<ReportItemKey> GetReportItemKeyList() const;

                    /**
                     * 设置Task Report ID List
                     * @param _reportItemKeyList Task Report ID List
                     * 
                     */
                    void SetReportItemKeyList(const std::vector<ReportItemKey>& _reportItemKeyList);

                    /**
                     * 判断参数 ReportItemKeyList 是否已赋值
                     * @return ReportItemKeyList 是否已赋值
                     * 
                     */
                    bool ReportItemKeyListHasBeenSet() const;

                    /**
                     * 获取List of Task IDs in the Report
                     * @return ReportTaskIdList List of Task IDs in the Report
                     * 
                     */
                    std::vector<ReportTaskIdList> GetReportTaskIdList() const;

                    /**
                     * 设置List of Task IDs in the Report
                     * @param _reportTaskIdList List of Task IDs in the Report
                     * 
                     */
                    void SetReportTaskIdList(const std::vector<ReportTaskIdList>& _reportTaskIdList);

                    /**
                     * 判断参数 ReportTaskIdList 是否已赋值
                     * @return ReportTaskIdList 是否已赋值
                     * 
                     */
                    bool ReportTaskIdListHasBeenSet() const;

                private:

                    /**
                     * 0: Preview; 1: Download
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Task Report ID List
                     */
                    std::vector<ReportItemKey> m_reportItemKeyList;
                    bool m_reportItemKeyListHasBeenSet;

                    /**
                     * List of Task IDs in the Report
                     */
                    std::vector<ReportTaskIdList> m_reportTaskIdList;
                    bool m_reportTaskIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETASKLOGURLREQUEST_H_
