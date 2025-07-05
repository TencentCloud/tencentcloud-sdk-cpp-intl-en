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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_QUERYONLINEVERSIONRESP_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_QUERYONLINEVERSIONRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Mini program online version ID
                */
                class QueryOnlineVersionResp : public AbstractModel
                {
                public:
                    QueryOnlineVersionResp();
                    ~QueryOnlineVersionResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPId Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPId Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                    /**
                     * 获取Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPVersion Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPVersion() const;

                    /**
                     * 设置Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPVersion Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPVersion(const std::string& _mNPVersion);

                    /**
                     * 判断参数 MNPVersion 是否已赋值
                     * @return MNPVersion 是否已赋值
                     * 
                     */
                    bool MNPVersionHasBeenSet() const;

                    /**
                     * 获取Version ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPVersionId Version ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMNPVersionId() const;

                    /**
                     * 设置Version ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPVersionId Version ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPVersionId(const int64_t& _mNPVersionId);

                    /**
                     * 判断参数 MNPVersionId 是否已赋值
                     * @return MNPVersionId 是否已赋值
                     * 
                     */
                    bool MNPVersionIdHasBeenSet() const;

                    /**
                     * 获取Version note
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPVersionNote Version note
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPVersionNote() const;

                    /**
                     * 设置Version note
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPVersionNote Version note
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPVersionNote(const std::string& _mNPVersionNote);

                    /**
                     * 判断参数 MNPVersionNote 是否已赋值
                     * @return MNPVersionNote 是否已赋值
                     * 
                     */
                    bool MNPVersionNoteHasBeenSet() const;

                    /**
                     * 获取Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPVersion;
                    bool m_mNPVersionHasBeenSet;

                    /**
                     * Version ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_mNPVersionId;
                    bool m_mNPVersionIdHasBeenSet;

                    /**
                     * Version note
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPVersionNote;
                    bool m_mNPVersionNoteHasBeenSet;

                    /**
                     * Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_QUERYONLINEVERSIONRESP_H_
