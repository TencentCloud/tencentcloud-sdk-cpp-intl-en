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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDBACKUPPLANDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDBACKUPPLANDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/LifeCycleData.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * data for the newly-added recording cloud migration plan
                */
                class AddRecordBackupPlanData : public AbstractModel
                {
                public:
                    AddRecordBackupPlanData();
                    ~AddRecordBackupPlanData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Recording cloud migration plan ID
                     * @return PlanId Recording cloud migration plan ID
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置Recording cloud migration plan ID
                     * @param _planId Recording cloud migration plan ID
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取Recording cloud migration plan name
                     * @return PlanName Recording cloud migration plan name
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置Recording cloud migration plan name
                     * @param _planName Recording cloud migration plan name
                     * 
                     */
                    void SetPlanName(const std::string& _planName);

                    /**
                     * 判断参数 PlanName 是否已赋值
                     * @return PlanName 是否已赋值
                     * 
                     */
                    bool PlanNameHasBeenSet() const;

                    /**
                     * 获取Video cloud template ID
                     * @return TemplateId Video cloud template ID
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Video cloud template ID
                     * @param _templateId Video cloud template ID
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Description of the recording cloud migration plan
                     * @return Describe Description of the recording cloud migration plan
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置Description of the recording cloud migration plan
                     * @param _describe Description of the recording cloud migration plan
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取Cloud file lifecycle
                     * @return LifeCycle Cloud file lifecycle
                     * 
                     */
                    LifeCycleData GetLifeCycle() const;

                    /**
                     * 设置Cloud file lifecycle
                     * @param _lifeCycle Cloud file lifecycle
                     * 
                     */
                    void SetLifeCycle(const LifeCycleData& _lifeCycle);

                    /**
                     * 判断参数 LifeCycle 是否已赋值
                     * @return LifeCycle 是否已赋值
                     * 
                     */
                    bool LifeCycleHasBeenSet() const;

                    /**
                     * 获取Recording cloud migration plan status. `1`: in normal use. `0`: deleting, unavailable.
                     * @return Status Recording cloud migration plan status. `1`: in normal use. `0`: deleting, unavailable.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Recording cloud migration plan status. `1`: in normal use. `0`: deleting, unavailable.
                     * @param _status Recording cloud migration plan status. `1`: in normal use. `0`: deleting, unavailable.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Number of channels
                     * @return ChannelCount Number of channels
                     * 
                     */
                    int64_t GetChannelCount() const;

                    /**
                     * 设置Number of channels
                     * @param _channelCount Number of channels
                     * 
                     */
                    void SetChannelCount(const int64_t& _channelCount);

                    /**
                     * 判断参数 ChannelCount 是否已赋值
                     * @return ChannelCount 是否已赋值
                     * 
                     */
                    bool ChannelCountHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateAt Creation time.
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置Creation time.
                     * @param _createAt Creation time.
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
                     * 获取Modification time.
                     * @return UpdateAt Modification time.
                     * 
                     */
                    std::string GetUpdateAt() const;

                    /**
                     * 设置Modification time.
                     * @param _updateAt Modification time.
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
                     * Recording cloud migration plan ID
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * Recording cloud migration plan name
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * Video cloud template ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Description of the recording cloud migration plan
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * Cloud file lifecycle
                     */
                    LifeCycleData m_lifeCycle;
                    bool m_lifeCycleHasBeenSet;

                    /**
                     * Recording cloud migration plan status. `1`: in normal use. `0`: deleting, unavailable.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Number of channels
                     */
                    int64_t m_channelCount;
                    bool m_channelCountHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * Modification time.
                     */
                    std::string m_updateAt;
                    bool m_updateAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDBACKUPPLANDATA_H_
