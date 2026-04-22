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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_QUERYMNGONLINEVERSIONRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_QUERYMNGONLINEVERSIONRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Queries the released mini game version ID
                */
                class QueryMNGOnlineVersionResp : public AbstractModel
                {
                public:
                    QueryMNGOnlineVersionResp();
                    ~QueryMNGOnlineVersionResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Mini game appid</p>
                     * @return MNPId <p>Mini game appid</p>
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置<p>Mini game appid</p>
                     * @param _mNPId <p>Mini game appid</p>
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
                     * 获取<p>Version number</p>
                     * @return MNPVersion <p>Version number</p>
                     * 
                     */
                    std::string GetMNPVersion() const;

                    /**
                     * 设置<p>Version number</p>
                     * @param _mNPVersion <p>Version number</p>
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
                     * 获取<p>Version ID</p>
                     * @return MNPVersionId <p>Version ID</p>
                     * 
                     */
                    int64_t GetMNPVersionId() const;

                    /**
                     * 设置<p>Version ID</p>
                     * @param _mNPVersionId <p>Version ID</p>
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
                     * 获取<p>Version remarks</p>
                     * @return MNPVersionNote <p>Version remarks</p>
                     * 
                     */
                    std::string GetMNPVersionNote() const;

                    /**
                     * 设置<p>Version remarks</p>
                     * @param _mNPVersionNote <p>Version remarks</p>
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
                     * 获取<p>Update time</p>
                     * @return UpdateTime <p>Update time</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time</p>
                     * @param _updateTime <p>Update time</p>
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
                     * <p>Mini game appid</p>
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * <p>Version number</p>
                     */
                    std::string m_mNPVersion;
                    bool m_mNPVersionHasBeenSet;

                    /**
                     * <p>Version ID</p>
                     */
                    int64_t m_mNPVersionId;
                    bool m_mNPVersionIdHasBeenSet;

                    /**
                     * <p>Version remarks</p>
                     */
                    std::string m_mNPVersionNote;
                    bool m_mNPVersionNoteHasBeenSet;

                    /**
                     * <p>Update time</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_QUERYMNGONLINEVERSIONRESP_H_
