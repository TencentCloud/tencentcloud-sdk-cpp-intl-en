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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATEDATARETRIEVALREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATEDATARETRIEVALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateDataRetrieval request structure.
                */
                class CreateDataRetrievalRequest : public AbstractModel
                {
                public:
                    CreateDataRetrievalRequest();
                    ~CreateDataRetrievalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>File system instance ID, which can be obtained through the DescribeCfsFileSystems API. Example value: cfs-xxxxxx</p>
                     * @return FileSystemId <p>File system instance ID, which can be obtained through the DescribeCfsFileSystems API. Example value: cfs-xxxxxx</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>File system instance ID, which can be obtained through the DescribeCfsFileSystems API. Example value: cfs-xxxxxx</p>
                     * @param _fileSystemId <p>File system instance ID, which can be obtained through the DescribeCfsFileSystems API. Example value: cfs-xxxxxx</p>
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取<p>Data retrieval name. Example value: DataDive</p>
                     * @return DataRetrievalName <p>Data retrieval name. Example value: DataDive</p>
                     * 
                     */
                    std::string GetDataRetrievalName() const;

                    /**
                     * 设置<p>Data retrieval name. Example value: DataDive</p>
                     * @param _dataRetrievalName <p>Data retrieval name. Example value: DataDive</p>
                     * 
                     */
                    void SetDataRetrievalName(const std::string& _dataRetrievalName);

                    /**
                     * 判断参数 DataRetrievalName 是否已赋值
                     * @return DataRetrievalName 是否已赋值
                     * 
                     */
                    bool DataRetrievalNameHasBeenSet() const;

                    /**
                     * 获取<p>Aggregated retrieval condition. Example value: from entries|where size &gt;4096</p>
                     * @return CompoundCondition <p>Aggregated retrieval condition. Example value: from entries|where size &gt;4096</p>
                     * 
                     */
                    std::string GetCompoundCondition() const;

                    /**
                     * 设置<p>Aggregated retrieval condition. Example value: from entries|where size &gt;4096</p>
                     * @param _compoundCondition <p>Aggregated retrieval condition. Example value: from entries|where size &gt;4096</p>
                     * 
                     */
                    void SetCompoundCondition(const std::string& _compoundCondition);

                    /**
                     * 判断参数 CompoundCondition 是否已赋值
                     * @return CompoundCondition 是否已赋值
                     * 
                     */
                    bool CompoundConditionHasBeenSet() const;

                    /**
                     * 获取<p>List retrieval condition.</p>
                     * @return QueryCondition <p>List retrieval condition.</p>
                     * 
                     */
                    std::string GetQueryCondition() const;

                    /**
                     * 设置<p>List retrieval condition.</p>
                     * @param _queryCondition <p>List retrieval condition.</p>
                     * 
                     */
                    void SetQueryCondition(const std::string& _queryCondition);

                    /**
                     * 判断参数 QueryCondition 是否已赋值
                     * @return QueryCondition 是否已赋值
                     * 
                     */
                    bool QueryConditionHasBeenSet() const;

                    /**
                     * 获取<p>Monthly data retrieval. Valid values: 1–31. The retrieval will be automatically created on the specified day of each month. For example, 1 indicates the 1st day of a month. You must specify either this parameter or DayOfWeek. Example value: 1</p>
                     * @return DayOfMonth <p>Monthly data retrieval. Valid values: 1–31. The retrieval will be automatically created on the specified day of each month. For example, 1 indicates the 1st day of a month. You must specify either this parameter or DayOfWeek. Example value: 1</p>
                     * 
                     */
                    std::string GetDayOfMonth() const;

                    /**
                     * 设置<p>Monthly data retrieval. Valid values: 1–31. The retrieval will be automatically created on the specified day of each month. For example, 1 indicates the 1st day of a month. You must specify either this parameter or DayOfWeek. Example value: 1</p>
                     * @param _dayOfMonth <p>Monthly data retrieval. Valid values: 1–31. The retrieval will be automatically created on the specified day of each month. For example, 1 indicates the 1st day of a month. You must specify either this parameter or DayOfWeek. Example value: 1</p>
                     * 
                     */
                    void SetDayOfMonth(const std::string& _dayOfMonth);

                    /**
                     * 判断参数 DayOfMonth 是否已赋值
                     * @return DayOfMonth 是否已赋值
                     * 
                     */
                    bool DayOfMonthHasBeenSet() const;

                    /**
                     * 获取<p>Day of the week for data retrieval repetition. Valid values: 1–7. 1 indicates Monday and 7 indicates Sunday. You must specify either this parameter or DayOfMonth. Example value: 2,3</p>
                     * @return DayOfWeek <p>Day of the week for data retrieval repetition. Valid values: 1–7. 1 indicates Monday and 7 indicates Sunday. You must specify either this parameter or DayOfMonth. Example value: 2,3</p>
                     * 
                     */
                    std::string GetDayOfWeek() const;

                    /**
                     * 设置<p>Day of the week for data retrieval repetition. Valid values: 1–7. 1 indicates Monday and 7 indicates Sunday. You must specify either this parameter or DayOfMonth. Example value: 2,3</p>
                     * @param _dayOfWeek <p>Day of the week for data retrieval repetition. Valid values: 1–7. 1 indicates Monday and 7 indicates Sunday. You must specify either this parameter or DayOfMonth. Example value: 2,3</p>
                     * 
                     */
                    void SetDayOfWeek(const std::string& _dayOfWeek);

                    /**
                     * 判断参数 DayOfWeek 是否已赋值
                     * @return DayOfWeek 是否已赋值
                     * 
                     */
                    bool DayOfWeekHasBeenSet() const;

                    /**
                     * 获取<p>Hour of the day for repetition. Valid values: 0–23. Example value: 1,3,5</p>
                     * @return Hour <p>Hour of the day for repetition. Valid values: 0–23. Example value: 1,3,5</p>
                     * 
                     */
                    std::string GetHour() const;

                    /**
                     * 设置<p>Hour of the day for repetition. Valid values: 0–23. Example value: 1,3,5</p>
                     * @param _hour <p>Hour of the day for repetition. Valid values: 0–23. Example value: 1,3,5</p>
                     * 
                     */
                    void SetHour(const std::string& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     * 
                     */
                    bool HourHasBeenSet() const;

                private:

                    /**
                     * <p>File system instance ID, which can be obtained through the DescribeCfsFileSystems API. Example value: cfs-xxxxxx</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>Data retrieval name. Example value: DataDive</p>
                     */
                    std::string m_dataRetrievalName;
                    bool m_dataRetrievalNameHasBeenSet;

                    /**
                     * <p>Aggregated retrieval condition. Example value: from entries|where size &gt;4096</p>
                     */
                    std::string m_compoundCondition;
                    bool m_compoundConditionHasBeenSet;

                    /**
                     * <p>List retrieval condition.</p>
                     */
                    std::string m_queryCondition;
                    bool m_queryConditionHasBeenSet;

                    /**
                     * <p>Monthly data retrieval. Valid values: 1–31. The retrieval will be automatically created on the specified day of each month. For example, 1 indicates the 1st day of a month. You must specify either this parameter or DayOfWeek. Example value: 1</p>
                     */
                    std::string m_dayOfMonth;
                    bool m_dayOfMonthHasBeenSet;

                    /**
                     * <p>Day of the week for data retrieval repetition. Valid values: 1–7. 1 indicates Monday and 7 indicates Sunday. You must specify either this parameter or DayOfMonth. Example value: 2,3</p>
                     */
                    std::string m_dayOfWeek;
                    bool m_dayOfWeekHasBeenSet;

                    /**
                     * <p>Hour of the day for repetition. Valid values: 0–23. Example value: 1,3,5</p>
                     */
                    std::string m_hour;
                    bool m_hourHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATEDATARETRIEVALREQUEST_H_
