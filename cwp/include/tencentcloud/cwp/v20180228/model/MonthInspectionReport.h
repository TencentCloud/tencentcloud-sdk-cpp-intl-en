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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MONTHINSPECTIONREPORT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MONTHINSPECTIONREPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Expert service - monthly inspection report
                */
                class MonthInspectionReport : public AbstractModel
                {
                public:
                    MonthInspectionReport();
                    ~MonthInspectionReport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Inspection report name
                     * @return ReportName Inspection report name
                     * 
                     */
                    std::string GetReportName() const;

                    /**
                     * 设置Inspection report name
                     * @param _reportName Inspection report name
                     * 
                     */
                    void SetReportName(const std::string& _reportName);

                    /**
                     * 判断参数 ReportName 是否已赋值
                     * @return ReportName 是否已赋值
                     * 
                     */
                    bool ReportNameHasBeenSet() const;

                    /**
                     * 获取Inspection report download link
                     * @return ReportPath Inspection report download link
                     * 
                     */
                    std::string GetReportPath() const;

                    /**
                     * 设置Inspection report download link
                     * @param _reportPath Inspection report download link
                     * 
                     */
                    void SetReportPath(const std::string& _reportPath);

                    /**
                     * 判断参数 ReportPath 是否已赋值
                     * @return ReportPath 是否已赋值
                     * 
                     */
                    bool ReportPathHasBeenSet() const;

                    /**
                     * 获取Inspection report update time
                     * @return ModifyTime Inspection report update time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Inspection report update time
                     * @param _modifyTime Inspection report update time
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Inspection report name
                     */
                    std::string m_reportName;
                    bool m_reportNameHasBeenSet;

                    /**
                     * Inspection report download link
                     */
                    std::string m_reportPath;
                    bool m_reportPathHasBeenSet;

                    /**
                     * Inspection report update time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MONTHINSPECTIONREPORT_H_
