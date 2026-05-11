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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PERSISTENCECOMPLETETASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PERSISTENCECOMPLETETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Clipping solidification task information.
                */
                class PersistenceCompleteTask : public AbstractModel
                {
                public:
                    PersistenceCompleteTask();
                    ~PersistenceCompleteTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Consolidate the generated Media ID.
                     * @return FileId Consolidate the generated Media ID.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Consolidate the generated Media ID.
                     * @param _fileId Consolidate the generated Media ID.
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取The source of clipping solidification has the following three types.
<li>SimpleHlsClip: Comes from simple HLS edit;</li>
<li>FastEditMedia: Comes from quick media editing;</li>
<li>LiveRealTimeClip: comes from live stream clipping.</li>
                     * @return PersistenceSource The source of clipping solidification has the following three types.
<li>SimpleHlsClip: Comes from simple HLS edit;</li>
<li>FastEditMedia: Comes from quick media editing;</li>
<li>LiveRealTimeClip: comes from live stream clipping.</li>
                     * 
                     */
                    std::string GetPersistenceSource() const;

                    /**
                     * 设置The source of clipping solidification has the following three types.
<li>SimpleHlsClip: Comes from simple HLS edit;</li>
<li>FastEditMedia: Comes from quick media editing;</li>
<li>LiveRealTimeClip: comes from live stream clipping.</li>
                     * @param _persistenceSource The source of clipping solidification has the following three types.
<li>SimpleHlsClip: Comes from simple HLS edit;</li>
<li>FastEditMedia: Comes from quick media editing;</li>
<li>LiveRealTimeClip: comes from live stream clipping.</li>
                     * 
                     */
                    void SetPersistenceSource(const std::string& _persistenceSource);

                    /**
                     * 判断参数 PersistenceSource 是否已赋值
                     * @return PersistenceSource 是否已赋值
                     * 
                     */
                    bool PersistenceSourceHasBeenSet() const;

                private:

                    /**
                     * Consolidate the generated Media ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * The source of clipping solidification has the following three types.
<li>SimpleHlsClip: Comes from simple HLS edit;</li>
<li>FastEditMedia: Comes from quick media editing;</li>
<li>LiveRealTimeClip: comes from live stream clipping.</li>
                     */
                    std::string m_persistenceSource;
                    bool m_persistenceSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PERSISTENCECOMPLETETASK_H_
