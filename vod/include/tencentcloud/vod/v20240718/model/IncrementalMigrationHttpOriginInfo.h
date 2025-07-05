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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGININFO_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpEndpointInfo.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationOriginFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * Incremental migration source information.
                */
                class IncrementalMigrationHttpOriginInfo : public AbstractModel
                {
                public:
                    IncrementalMigrationHttpOriginInfo();
                    ~IncrementalMigrationHttpOriginInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Incremental migration source address information.
                     * @return EndpointInfo Incremental migration source address information.
                     * 
                     */
                    IncrementalMigrationHttpEndpointInfo GetEndpointInfo() const;

                    /**
                     * 设置Incremental migration source address information.
                     * @param _endpointInfo Incremental migration source address information.
                     * 
                     */
                    void SetEndpointInfo(const IncrementalMigrationHttpEndpointInfo& _endpointInfo);

                    /**
                     * 判断参数 EndpointInfo 是否已赋值
                     * @return EndpointInfo 是否已赋值
                     * 
                     */
                    bool EndpointInfoHasBeenSet() const;

                    /**
                     * 获取Incremental migration source file information.
                     * @return FileInfo Incremental migration source file information.
                     * 
                     */
                    IncrementalMigrationOriginFileInfo GetFileInfo() const;

                    /**
                     * 设置Incremental migration source file information.
                     * @param _fileInfo Incremental migration source file information.
                     * 
                     */
                    void SetFileInfo(const IncrementalMigrationOriginFileInfo& _fileInfo);

                    /**
                     * 判断参数 FileInfo 是否已赋值
                     * @return FileInfo 是否已赋值
                     * 
                     */
                    bool FileInfoHasBeenSet() const;

                private:

                    /**
                     * Incremental migration source address information.
                     */
                    IncrementalMigrationHttpEndpointInfo m_endpointInfo;
                    bool m_endpointInfoHasBeenSet;

                    /**
                     * Incremental migration source file information.
                     */
                    IncrementalMigrationOriginFileInfo m_fileInfo;
                    bool m_fileInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGININFO_H_
