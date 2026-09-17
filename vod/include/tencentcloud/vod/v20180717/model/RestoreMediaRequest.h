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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_RESTOREMEDIAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_RESTOREMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * RestoreMedia request structure.
                */
                class RestoreMediaRequest : public AbstractModel
                {
                public:
                    RestoreMediaRequest();
                    ~RestoreMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return FileIds 
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置
                     * @param _fileIds 
                     * 
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     * 
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取
                     * @return RestoreDay 
                     * 
                     */
                    uint64_t GetRestoreDay() const;

                    /**
                     * 设置
                     * @param _restoreDay 
                     * 
                     */
                    void SetRestoreDay(const uint64_t& _restoreDay);

                    /**
                     * 判断参数 RestoreDay 是否已赋值
                     * @return RestoreDay 是否已赋值
                     * 
                     */
                    bool RestoreDayHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return RestoreTier 
                     * 
                     */
                    std::string GetRestoreTier() const;

                    /**
                     * 设置
                     * @param _restoreTier 
                     * 
                     */
                    void SetRestoreTier(const std::string& _restoreTier);

                    /**
                     * 判断参数 RestoreTier 是否已赋值
                     * @return RestoreTier 是否已赋值
                     * 
                     */
                    bool RestoreTierHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_restoreDay;
                    bool m_restoreDayHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_restoreTier;
                    bool m_restoreTierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_RESTOREMEDIAREQUEST_H_
