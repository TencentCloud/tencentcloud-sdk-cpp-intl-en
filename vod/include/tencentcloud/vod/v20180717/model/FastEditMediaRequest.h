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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/FastEditMediaFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * FastEditMedia request structure.
                */
                class FastEditMediaRequest : public AbstractModel
                {
                public:
                    FastEditMediaRequest();
                    ~FastEditMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return FileInfos 
                     * 
                     */
                    std::vector<FastEditMediaFileInfo> GetFileInfos() const;

                    /**
                     * 设置
                     * @param _fileInfos 
                     * 
                     */
                    void SetFileInfos(const std::vector<FastEditMediaFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取
                     * @return ClipMode 
                     * 
                     */
                    std::string GetClipMode() const;

                    /**
                     * 设置
                     * @param _clipMode 
                     * 
                     */
                    void SetClipMode(const std::string& _clipMode);

                    /**
                     * 判断参数 ClipMode 是否已赋值
                     * @return ClipMode 是否已赋值
                     * 
                     */
                    bool ClipModeHasBeenSet() const;

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

                private:

                    /**
                     * 
                     */
                    std::vector<FastEditMediaFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_clipMode;
                    bool m_clipModeHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIAREQUEST_H_
