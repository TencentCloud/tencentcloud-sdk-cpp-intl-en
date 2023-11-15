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
                     * 获取Type of the task. `0`: Preview; `1`: Download
                     * @return Type Type of the task. `0`: Preview; `1`: Download
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Type of the task. `0`: Preview; `1`: Download
                     * @param _type Type of the task. `0`: Preview; `1`: Download
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
                     * 获取List of task report IDs
                     * @return ReportItemKeyList List of task report IDs
                     * 
                     */
                    std::vector<ReportItemKey> GetReportItemKeyList() const;

                    /**
                     * 设置List of task report IDs
                     * @param _reportItemKeyList List of task report IDs
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
                     * 获取List of task IDs in the report
                     * @return ReportTaskIdList List of task IDs in the report
                     * 
                     */
                    std::vector<ReportTaskIdList> GetReportTaskIdList() const;

                    /**
                     * 设置List of task IDs in the report
                     * @param _reportTaskIdList List of task IDs in the report
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
                     * Type of the task. `0`: Preview; `1`: Download
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * List of task report IDs
                     */
                    std::vector<ReportItemKey> m_reportItemKeyList;
                    bool m_reportItemKeyListHasBeenSet;

                    /**
                     * List of task IDs in the report
                     */
                    std::vector<ReportTaskIdList> m_reportTaskIdList;
                    bool m_reportTaskIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETASKLOGURLREQUEST_H_
