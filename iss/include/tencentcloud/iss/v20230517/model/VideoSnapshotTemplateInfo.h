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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_VIDEOSNAPSHOTTEMPLATEINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_VIDEOSNAPSHOTTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/MultiVideoSnapshotMode.h>
#include <tencentcloud/iss/v20230517/model/EffectiveTime.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * Screenshot template information
                */
                class VideoSnapshotTemplateInfo : public AbstractModel
                {
                public:
                    VideoSnapshotTemplateInfo();
                    ~VideoSnapshotTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Screenshot template Id</p>
                     * @return TemplateId <p>Screenshot template Id</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>Screenshot template Id</p>
                     * @param _templateId <p>Screenshot template Id</p>
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
                     * 获取<p>Screenshot template name</p>
                     * @return Name <p>Screenshot template name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Screenshot template name</p>
                     * @param _name <p>Screenshot template name</p>
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
                     * 获取<p>Screenshot type</p><p>Enumeration values:</p><ul><li>1: Real-time frame capture</li><li>2: Low frequency frame capture</li></ul>
                     * @return Type <p>Screenshot type</p><p>Enumeration values:</p><ul><li>1: Real-time frame capture</li><li>2: Low frequency frame capture</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>Screenshot type</p><p>Enumeration values:</p><ul><li>1: Real-time frame capture</li><li>2: Low frequency frame capture</li></ul>
                     * @param _type <p>Screenshot type</p><p>Enumeration values:</p><ul><li>1: Real-time frame capture</li><li>2: Low frequency frame capture</li></ul>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Frame capturing frequency</p>
                     * @return Interval <p>Frame capturing frequency</p>
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置<p>Frame capturing frequency</p>
                     * @param _interval <p>Frame capturing frequency</p>
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>Multiple mode</p>
                     * @return MultiMode <p>Multiple mode</p>
                     * 
                     */
                    MultiVideoSnapshotMode GetMultiMode() const;

                    /**
                     * 设置<p>Multiple mode</p>
                     * @param _multiMode <p>Multiple mode</p>
                     * 
                     */
                    void SetMultiMode(const MultiVideoSnapshotMode& _multiMode);

                    /**
                     * 判断参数 MultiMode 是否已赋值
                     * @return MultiMode 是否已赋值
                     * 
                     */
                    bool MultiModeHasBeenSet() const;

                    /**
                     * 获取<p>Effective period</p>
                     * @return Times <p>Effective period</p>
                     * 
                     */
                    std::vector<EffectiveTime> GetTimes() const;

                    /**
                     * 设置<p>Effective period</p>
                     * @param _times <p>Effective period</p>
                     * 
                     */
                    void SetTimes(const std::vector<EffectiveTime>& _times);

                    /**
                     * 判断参数 Times 是否已赋值
                     * @return Times 是否已赋值
                     * 
                     */
                    bool TimesHasBeenSet() const;

                    /**
                     * 获取<p>Number of configurations associated with the template</p>
                     * @return RelatedConfigCount <p>Number of configurations associated with the template</p>
                     * 
                     */
                    int64_t GetRelatedConfigCount() const;

                    /**
                     * 设置<p>Number of configurations associated with the template</p>
                     * @param _relatedConfigCount <p>Number of configurations associated with the template</p>
                     * 
                     */
                    void SetRelatedConfigCount(const int64_t& _relatedConfigCount);

                    /**
                     * 判断参数 RelatedConfigCount 是否已赋值
                     * @return RelatedConfigCount 是否已赋值
                     * 
                     */
                    bool RelatedConfigCountHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Last update time</p>
                     * @return UpdateTime <p>Last update time</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Last update time</p>
                     * @param _updateTime <p>Last update time</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Screenshot template Id</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>Screenshot template name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Screenshot type</p><p>Enumeration values:</p><ul><li>1: Real-time frame capture</li><li>2: Low frequency frame capture</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Frame capturing frequency</p>
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>Multiple mode</p>
                     */
                    MultiVideoSnapshotMode m_multiMode;
                    bool m_multiModeHasBeenSet;

                    /**
                     * <p>Effective period</p>
                     */
                    std::vector<EffectiveTime> m_times;
                    bool m_timesHasBeenSet;

                    /**
                     * <p>Number of configurations associated with the template</p>
                     */
                    int64_t m_relatedConfigCount;
                    bool m_relatedConfigCountHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Last update time</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_VIDEOSNAPSHOTTEMPLATEINFO_H_
