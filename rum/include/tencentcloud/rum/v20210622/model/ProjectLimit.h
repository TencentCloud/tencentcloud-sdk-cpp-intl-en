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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_PROJECTLIMIT_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_PROJECTLIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Project API restriction type
                */
                class ProjectLimit : public AbstractModel
                {
                public:
                    ProjectLimit();
                    ~ProjectLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Primary key ID
                     * @return ID Primary key ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Primary key ID
                     * @param _iD Primary key ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectID Project ID
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置Project ID
                     * @param _projectID Project ID
                     * 
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取API
                     * @return ProjectInterface API
                     * 
                     */
                    std::string GetProjectInterface() const;

                    /**
                     * 设置API
                     * @param _projectInterface API
                     * 
                     */
                    void SetProjectInterface(const std::string& _projectInterface);

                    /**
                     * 判断参数 ProjectInterface 是否已赋值
                     * @return ProjectInterface 是否已赋值
                     * 
                     */
                    bool ProjectInterfaceHasBeenSet() const;

                    /**
                     * 获取Reporting rate
                     * @return ReportRate Reporting rate
                     * 
                     */
                    int64_t GetReportRate() const;

                    /**
                     * 设置Reporting rate
                     * @param _reportRate Reporting rate
                     * 
                     */
                    void SetReportRate(const int64_t& _reportRate);

                    /**
                     * 判断参数 ReportRate 是否已赋值
                     * @return ReportRate 是否已赋值
                     * 
                     */
                    bool ReportRateHasBeenSet() const;

                    /**
                     * 获取Reporting type. 1: reporting rate; 2: reporting count limit
                     * @return ReportType Reporting type. 1: reporting rate; 2: reporting count limit
                     * 
                     */
                    int64_t GetReportType() const;

                    /**
                     * 设置Reporting type. 1: reporting rate; 2: reporting count limit
                     * @param _reportType Reporting type. 1: reporting rate; 2: reporting count limit
                     * 
                     */
                    void SetReportType(const int64_t& _reportType);

                    /**
                     * 判断参数 ReportType 是否已赋值
                     * @return ReportType 是否已赋值
                     * 
                     */
                    bool ReportTypeHasBeenSet() const;

                private:

                    /**
                     * Primary key ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * API
                     */
                    std::string m_projectInterface;
                    bool m_projectInterfaceHasBeenSet;

                    /**
                     * Reporting rate
                     */
                    int64_t m_reportRate;
                    bool m_reportRateHasBeenSet;

                    /**
                     * Reporting type. 1: reporting rate; 2: reporting count limit
                     */
                    int64_t m_reportType;
                    bool m_reportTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_PROJECTLIMIT_H_
