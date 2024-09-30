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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIQUALITYCONTROLRESULTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIQUALITYCONTROLRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/QualityControlResult.h>
#include <tencentcloud/mps/v20190612/model/DiagnoseResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Live stream media quality inspection result.
                */
                class LiveStreamAiQualityControlResultInfo : public AbstractModel
                {
                public:
                    LiveStreamAiQualityControlResultInfo();
                    ~LiveStreamAiQualityControlResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Content quality inspection result list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QualityControlResults Content quality inspection result list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::vector<QualityControlResult> GetQualityControlResults() const;

                    /**
                     * 设置Content quality inspection result list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _qualityControlResults Content quality inspection result list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetQualityControlResults(const std::vector<QualityControlResult>& _qualityControlResults);

                    /**
                     * 判断参数 QualityControlResults 是否已赋值
                     * @return QualityControlResults 是否已赋值
                     * @deprecated
                     */
                    bool QualityControlResultsHasBeenSet() const;

                    /**
                     * 获取
                     * @return DiagnoseResults 
                     * @deprecated
                     */
                    std::vector<DiagnoseResult> GetDiagnoseResults() const;

                    /**
                     * 设置
                     * @param _diagnoseResults 
                     * @deprecated
                     */
                    void SetDiagnoseResults(const std::vector<DiagnoseResult>& _diagnoseResults);

                    /**
                     * 判断参数 DiagnoseResults 是否已赋值
                     * @return DiagnoseResults 是否已赋值
                     * @deprecated
                     */
                    bool DiagnoseResultsHasBeenSet() const;

                    /**
                     * 获取Content quality inspection result list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QualityControlResultSet Content quality inspection result list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<QualityControlResult> GetQualityControlResultSet() const;

                    /**
                     * 设置Content quality inspection result list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _qualityControlResultSet Content quality inspection result list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQualityControlResultSet(const std::vector<QualityControlResult>& _qualityControlResultSet);

                    /**
                     * 判断参数 QualityControlResultSet 是否已赋值
                     * @return QualityControlResultSet 是否已赋值
                     * 
                     */
                    bool QualityControlResultSetHasBeenSet() const;

                    /**
                     * 获取Format diagnostic result list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiagnoseResultSet Format diagnostic result list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DiagnoseResult> GetDiagnoseResultSet() const;

                    /**
                     * 设置Format diagnostic result list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diagnoseResultSet Format diagnostic result list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiagnoseResultSet(const std::vector<DiagnoseResult>& _diagnoseResultSet);

                    /**
                     * 判断参数 DiagnoseResultSet 是否已赋值
                     * @return DiagnoseResultSet 是否已赋值
                     * 
                     */
                    bool DiagnoseResultSetHasBeenSet() const;

                private:

                    /**
                     * Content quality inspection result list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<QualityControlResult> m_qualityControlResults;
                    bool m_qualityControlResultsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<DiagnoseResult> m_diagnoseResults;
                    bool m_diagnoseResultsHasBeenSet;

                    /**
                     * Content quality inspection result list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<QualityControlResult> m_qualityControlResultSet;
                    bool m_qualityControlResultSetHasBeenSet;

                    /**
                     * Format diagnostic result list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DiagnoseResult> m_diagnoseResultSet;
                    bool m_diagnoseResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIQUALITYCONTROLRESULTINFO_H_
