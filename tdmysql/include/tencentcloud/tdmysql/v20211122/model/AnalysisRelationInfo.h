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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_ANALYSISRELATIONINFO_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_ANALYSISRELATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Analytics engine association
                */
                class AnalysisRelationInfo : public AbstractModel
                {
                public:
                    AnalysisRelationInfo();
                    ~AnalysisRelationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Source instance Id</p>
                     * @return PrimaryInstanceId <p>Source instance Id</p>
                     * 
                     */
                    std::string GetPrimaryInstanceId() const;

                    /**
                     * 设置<p>Source instance Id</p>
                     * @param _primaryInstanceId <p>Source instance Id</p>
                     * 
                     */
                    void SetPrimaryInstanceId(const std::string& _primaryInstanceId);

                    /**
                     * 判断参数 PrimaryInstanceId 是否已赋值
                     * @return PrimaryInstanceId 是否已赋值
                     * 
                     */
                    bool PrimaryInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Analysis engine instance Id</p>
                     * @return AnalysisInstanceId <p>Analysis engine instance Id</p>
                     * 
                     */
                    std::string GetAnalysisInstanceId() const;

                    /**
                     * 设置<p>Analysis engine instance Id</p>
                     * @param _analysisInstanceId <p>Analysis engine instance Id</p>
                     * 
                     */
                    void SetAnalysisInstanceId(const std::string& _analysisInstanceId);

                    /**
                     * 判断参数 AnalysisInstanceId 是否已赋值
                     * @return AnalysisInstanceId 是否已赋值
                     * 
                     */
                    bool AnalysisInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Analysis engine relationship status</p><p>Enumeration values:</p><ul><li>creating: Creating</li><li>running: Running</li><li>destroyed: Terminated</li></ul>
                     * @return Status <p>Analysis engine relationship status</p><p>Enumeration values:</p><ul><li>creating: Creating</li><li>running: Running</li><li>destroyed: Terminated</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Analysis engine relationship status</p><p>Enumeration values:</p><ul><li>creating: Creating</li><li>running: Running</li><li>destroyed: Terminated</li></ul>
                     * @param _status <p>Analysis engine relationship status</p><p>Enumeration values:</p><ul><li>creating: Creating</li><li>running: Running</li><li>destroyed: Terminated</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateAt <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createAt <p>Creation time.</p>
                     * 
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                    /**
                     * 获取<p>Update time.</p>
                     * @return UpdateAt <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdateAt() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _updateAt <p>Update time.</p>
                     * 
                     */
                    void SetUpdateAt(const std::string& _updateAt);

                    /**
                     * 判断参数 UpdateAt 是否已赋值
                     * @return UpdateAt 是否已赋值
                     * 
                     */
                    bool UpdateAtHasBeenSet() const;

                private:

                    /**
                     * <p>Source instance Id</p>
                     */
                    std::string m_primaryInstanceId;
                    bool m_primaryInstanceIdHasBeenSet;

                    /**
                     * <p>Analysis engine instance Id</p>
                     */
                    std::string m_analysisInstanceId;
                    bool m_analysisInstanceIdHasBeenSet;

                    /**
                     * <p>Analysis engine relationship status</p><p>Enumeration values:</p><ul><li>creating: Creating</li><li>running: Running</li><li>destroyed: Terminated</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateAt;
                    bool m_updateAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_ANALYSISRELATIONINFO_H_
