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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BROADCASTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BROADCASTINFO_H_

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
                * Security report article details
                */
                class BroadcastInfo : public AbstractModel
                {
                public:
                    BroadcastInfo();
                    ~BroadcastInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Article name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Title Article name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Article name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _title Article name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Redirection location: 0: no redirection; 1: virus scanning; 2: vulnerability scan; 3: security baseline
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GotoType Redirection location: 0: no redirection; 1: virus scanning; 2: vulnerability scan; 3: security baseline
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetGotoType() const;

                    /**
                     * 设置Redirection location: 0: no redirection; 1: virus scanning; 2: vulnerability scan; 3: security baseline
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _gotoType Redirection location: 0: no redirection; 1: virus scanning; 2: vulnerability scan; 3: security baseline
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGotoType(const uint64_t& _gotoType);

                    /**
                     * 判断参数 GotoType 是否已赋值
                     * @return GotoType 是否已赋值
                     * 
                     */
                    bool GotoTypeHasBeenSet() const;

                    /**
                     * 获取Subtitle
                     * @return Subtitle Subtitle
                     * 
                     */
                    std::string GetSubtitle() const;

                    /**
                     * 设置Subtitle
                     * @param _subtitle Subtitle
                     * 
                     */
                    void SetSubtitle(const std::string& _subtitle);

                    /**
                     * 判断参数 Subtitle 是否已赋值
                     * @return Subtitle 是否已赋值
                     * 
                     */
                    bool SubtitleHasBeenSet() const;

                    /**
                     * 获取Release time
                     * @return CreateTime Release time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Release time
                     * @param _createTime Release time
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
                     * 获取Rich text content information
                     * @return Content Rich text content information
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Rich text content information
                     * @param _content Rich text content information
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Article unique ID
                     * @return Id Article unique ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Article unique ID
                     * @param _id Article unique ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Type: 0: emergency notification; 1: feature update; 2: industry honor; 3: version release
                     * @return Type Type: 0: emergency notification; 1: feature update; 2: industry honor; 3: version release
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Type: 0: emergency notification; 1: feature update; 2: industry honor; 3: version release
                     * @param _type Type: 0: emergency notification; 1: feature update; 2: industry honor; 3: version release
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Article name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Redirection location: 0: no redirection; 1: virus scanning; 2: vulnerability scan; 3: security baseline
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_gotoType;
                    bool m_gotoTypeHasBeenSet;

                    /**
                     * Subtitle
                     */
                    std::string m_subtitle;
                    bool m_subtitleHasBeenSet;

                    /**
                     * Release time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Rich text content information
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Article unique ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Type: 0: emergency notification; 1: feature update; 2: industry honor; 3: version release
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BROADCASTINFO_H_
