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
                     * 获取
                     * @return QualityControlResults 
                     * @deprecated
                     */
                    std::vector<QualityControlResult> GetQualityControlResults() const;

                    /**
                     * 设置
                     * @param _qualityControlResults 
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
                     * 获取
                     * @return QualityControlResultSet 
                     * 
                     */
                    std::vector<QualityControlResult> GetQualityControlResultSet() const;

                    /**
                     * 设置
                     * @param _qualityControlResultSet 
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
                     * 获取
                     * @return DiagnoseResultSet 
                     * 
                     */
                    std::vector<DiagnoseResult> GetDiagnoseResultSet() const;

                    /**
                     * 设置
                     * @param _diagnoseResultSet 
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
                     * 
                     */
                    std::vector<QualityControlResult> m_qualityControlResults;
                    bool m_qualityControlResultsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<DiagnoseResult> m_diagnoseResults;
                    bool m_diagnoseResultsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<QualityControlResult> m_qualityControlResultSet;
                    bool m_qualityControlResultSetHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<DiagnoseResult> m_diagnoseResultSet;
                    bool m_diagnoseResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIQUALITYCONTROLRESULTINFO_H_
