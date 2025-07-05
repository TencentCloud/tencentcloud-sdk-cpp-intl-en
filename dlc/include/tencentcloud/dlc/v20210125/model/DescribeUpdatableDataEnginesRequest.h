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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUPDATABLEDATAENGINESREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUPDATABLEDATAENGINESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeUpdatableDataEngines request structure.
                */
                class DescribeUpdatableDataEnginesRequest : public AbstractModel
                {
                public:
                    DescribeUpdatableDataEnginesRequest();
                    ~DescribeUpdatableDataEnginesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Operation commands of engine configuration. UpdateSparkSQLLakefsPath updates the path of managed tables, and UpdateSparkSQLResultPath updates the path of result buckets.
                     * @return DataEngineConfigCommand Operation commands of engine configuration. UpdateSparkSQLLakefsPath updates the path of managed tables, and UpdateSparkSQLResultPath updates the path of result buckets.
                     * 
                     */
                    std::string GetDataEngineConfigCommand() const;

                    /**
                     * 设置Operation commands of engine configuration. UpdateSparkSQLLakefsPath updates the path of managed tables, and UpdateSparkSQLResultPath updates the path of result buckets.
                     * @param _dataEngineConfigCommand Operation commands of engine configuration. UpdateSparkSQLLakefsPath updates the path of managed tables, and UpdateSparkSQLResultPath updates the path of result buckets.
                     * 
                     */
                    void SetDataEngineConfigCommand(const std::string& _dataEngineConfigCommand);

                    /**
                     * 判断参数 DataEngineConfigCommand 是否已赋值
                     * @return DataEngineConfigCommand 是否已赋值
                     * 
                     */
                    bool DataEngineConfigCommandHasBeenSet() const;

                    /**
                     * 获取
                     * @return UseLakeFs 
                     * 
                     */
                    bool GetUseLakeFs() const;

                    /**
                     * 设置
                     * @param _useLakeFs 
                     * 
                     */
                    void SetUseLakeFs(const bool& _useLakeFs);

                    /**
                     * 判断参数 UseLakeFs 是否已赋值
                     * @return UseLakeFs 是否已赋值
                     * 
                     */
                    bool UseLakeFsHasBeenSet() const;

                    /**
                     * 获取
                     * @return CustomResultPath 
                     * 
                     */
                    std::string GetCustomResultPath() const;

                    /**
                     * 设置
                     * @param _customResultPath 
                     * 
                     */
                    void SetCustomResultPath(const std::string& _customResultPath);

                    /**
                     * 判断参数 CustomResultPath 是否已赋值
                     * @return CustomResultPath 是否已赋值
                     * 
                     */
                    bool CustomResultPathHasBeenSet() const;

                private:

                    /**
                     * Operation commands of engine configuration. UpdateSparkSQLLakefsPath updates the path of managed tables, and UpdateSparkSQLResultPath updates the path of result buckets.
                     */
                    std::string m_dataEngineConfigCommand;
                    bool m_dataEngineConfigCommandHasBeenSet;

                    /**
                     * 
                     */
                    bool m_useLakeFs;
                    bool m_useLakeFsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_customResultPath;
                    bool m_customResultPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUPDATABLEDATAENGINESREQUEST_H_
