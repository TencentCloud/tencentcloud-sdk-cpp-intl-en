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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEOUTPUTCONF_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEOUTPUTCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Notebook/Python cell output configuration
                */
                class FileOutputConf : public AbstractModel
                {
                public:
                    FileOutputConf();
                    ~FileOutputConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cell ID
                     * @return CellId Cell ID
                     * 
                     */
                    std::string GetCellId() const;

                    /**
                     * 设置Cell ID
                     * @param _cellId Cell ID
                     * 
                     */
                    void SetCellId(const std::string& _cellId);

                    /**
                     * 判断参数 CellId 是否已赋值
                     * @return CellId 是否已赋值
                     * 
                     */
                    bool CellIdHasBeenSet() const;

                    /**
                     * 获取Dashboard chart configuration, JSON string
                     * @return DashboardConf Dashboard chart configuration, JSON string
                     * 
                     */
                    std::string GetDashboardConf() const;

                    /**
                     * 设置Dashboard chart configuration, JSON string
                     * @param _dashboardConf Dashboard chart configuration, JSON string
                     * 
                     */
                    void SetDashboardConf(const std::string& _dashboardConf);

                    /**
                     * 判断参数 DashboardConf 是否已赋值
                     * @return DashboardConf 是否已赋值
                     * 
                     */
                    bool DashboardConfHasBeenSet() const;

                    /**
                     * 获取Pre-signed download URL of the execution result file
                     * @return OutputPath Pre-signed download URL of the execution result file
                     * 
                     */
                    std::string GetOutputPath() const;

                    /**
                     * 设置Pre-signed download URL of the execution result file
                     * @param _outputPath Pre-signed download URL of the execution result file
                     * 
                     */
                    void SetOutputPath(const std::string& _outputPath);

                    /**
                     * 判断参数 OutputPath 是否已赋值
                     * @return OutputPath 是否已赋值
                     * 
                     */
                    bool OutputPathHasBeenSet() const;

                private:

                    /**
                     * Cell ID
                     */
                    std::string m_cellId;
                    bool m_cellIdHasBeenSet;

                    /**
                     * Dashboard chart configuration, JSON string
                     */
                    std::string m_dashboardConf;
                    bool m_dashboardConfHasBeenSet;

                    /**
                     * Pre-signed download URL of the execution result file
                     */
                    std::string m_outputPath;
                    bool m_outputPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEOUTPUTCONF_H_
