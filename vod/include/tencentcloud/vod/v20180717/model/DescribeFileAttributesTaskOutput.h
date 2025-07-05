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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEFILEATTRIBUTESTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEFILEATTRIBUTESTASKOUTPUT_H_

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
                * The output of a task to get file attributes.
                */
                class DescribeFileAttributesTaskOutput : public AbstractModel
                {
                public:
                    DescribeFileAttributesTaskOutput();
                    ~DescribeFileAttributesTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The MD5 hash of the file.
                     * @return Md5 The MD5 hash of the file.
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置The MD5 hash of the file.
                     * @param _md5 The MD5 hash of the file.
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取The Sha1 value of the media file.
                     * @return Sha1 The Sha1 value of the media file.
                     * 
                     */
                    std::string GetSha1() const;

                    /**
                     * 设置The Sha1 value of the media file.
                     * @param _sha1 The Sha1 value of the media file.
                     * 
                     */
                    void SetSha1(const std::string& _sha1);

                    /**
                     * 判断参数 Sha1 是否已赋值
                     * @return Sha1 是否已赋值
                     * 
                     */
                    bool Sha1HasBeenSet() const;

                private:

                    /**
                     * The MD5 hash of the file.
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * The Sha1 value of the media file.
                     */
                    std::string m_sha1;
                    bool m_sha1HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEFILEATTRIBUTESTASKOUTPUT_H_
