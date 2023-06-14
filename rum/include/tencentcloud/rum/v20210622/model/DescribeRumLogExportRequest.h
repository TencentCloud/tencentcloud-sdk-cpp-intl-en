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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGEXPORTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGEXPORTREQUEST_H_

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
                * DescribeRumLogExport request structure.
                */
                class DescribeRumLogExportRequest : public AbstractModel
                {
                public:
                    DescribeRumLogExportRequest();
                    ~DescribeRumLogExportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Export identifier name
                     * @return Name Export identifier name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Export identifier name
                     * @param _name Export identifier name
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
                     * 获取Start time (required)
                     * @return StartTime Start time (required)
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time (required)
                     * @param _startTime Start time (required)
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query statement, which is required and can contain up to 4,096 characters.
                     * @return Query Query statement, which is required and can contain up to 4,096 characters.
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query statement, which is required and can contain up to 4,096 characters.
                     * @param _query Query statement, which is required and can contain up to 4,096 characters.
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
                     * 获取End time (required)
                     * @return EndTime End time (required)
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time (required)
                     * @param _endTime End time (required)
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Project ID (required)
                     * @return ID Project ID (required)
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Project ID (required)
                     * @param _iD Project ID (required)
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
                     * 获取Filter field
                     * @return Fields Filter field
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置Filter field
                     * @param _fields Filter field
                     * 
                     */
                    void SetFields(const std::vector<std::string>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                private:

                    /**
                     * Export identifier name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Start time (required)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query statement, which is required and can contain up to 4,096 characters.
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * End time (required)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Project ID (required)
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Filter field
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGEXPORTREQUEST_H_
