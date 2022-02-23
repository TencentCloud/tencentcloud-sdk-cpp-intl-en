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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYPROJECTLIMITREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYPROJECTLIMITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * ModifyProjectLimit request structure.
                */
                class ModifyProjectLimitRequest : public AbstractModel
                {
                public:
                    ModifyProjectLimitRequest();
                    ~ModifyProjectLimitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID
                     * @return ProjectID Project ID
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置Project ID
                     * @param ProjectID Project ID
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取Project API
                     * @return ProjectInterface Project API
                     */
                    std::string GetProjectInterface() const;

                    /**
                     * 设置Project API
                     * @param ProjectInterface Project API
                     */
                    void SetProjectInterface(const std::string& _projectInterface);

                    /**
                     * 判断参数 ProjectInterface 是否已赋值
                     * @return ProjectInterface 是否已赋值
                     */
                    bool ProjectInterfaceHasBeenSet() const;

                    /**
                     * 获取Reporting rate. 10 means 10%
                     * @return ReportRate Reporting rate. 10 means 10%
                     */
                    int64_t GetReportRate() const;

                    /**
                     * 设置Reporting rate. 10 means 10%
                     * @param ReportRate Reporting rate. 10 means 10%
                     */
                    void SetReportRate(const int64_t& _reportRate);

                    /**
                     * 判断参数 ReportRate 是否已赋值
                     * @return ReportRate 是否已赋值
                     */
                    bool ReportRateHasBeenSet() const;

                    /**
                     * 获取Reporting type. 1: rate; 2: number of reported data entries
                     * @return ReportType Reporting type. 1: rate; 2: number of reported data entries
                     */
                    int64_t GetReportType() const;

                    /**
                     * 设置Reporting type. 1: rate; 2: number of reported data entries
                     * @param ReportType Reporting type. 1: rate; 2: number of reported data entries
                     */
                    void SetReportType(const int64_t& _reportType);

                    /**
                     * 判断参数 ReportType 是否已赋值
                     * @return ReportType 是否已赋值
                     */
                    bool ReportTypeHasBeenSet() const;

                    /**
                     * 获取Primary key ID
                     * @return ID Primary key ID
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Primary key ID
                     * @param ID Primary key ID
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * Project API
                     */
                    std::string m_projectInterface;
                    bool m_projectInterfaceHasBeenSet;

                    /**
                     * Reporting rate. 10 means 10%
                     */
                    int64_t m_reportRate;
                    bool m_reportRateHasBeenSet;

                    /**
                     * Reporting type. 1: rate; 2: number of reported data entries
                     */
                    int64_t m_reportType;
                    bool m_reportTypeHasBeenSet;

                    /**
                     * Primary key ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYPROJECTLIMITREQUEST_H_
