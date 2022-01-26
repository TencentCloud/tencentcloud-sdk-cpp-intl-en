/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CLIPTASK2017_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CLIPTASK2017_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ClipFileInfo2017.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Video clipping task information. This structure is only used for tasks initiated by the [ClipVideo](https://intl.cloud.tencent.com/document/product/266/10156?from_cn_redirect=1) API in v2017.
                */
                class ClipTask2017 : public AbstractModel
                {
                public:
                    ClipTask2017();
                    ~ClipTask2017() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video clipping task ID.
                     * @return TaskId Video clipping task ID.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Video clipping task ID.
                     * @param TaskId Video clipping task ID.
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取ID of source file for video clipping task.
                     * @return SrcFileId ID of source file for video clipping task.
                     */
                    std::string GetSrcFileId() const;

                    /**
                     * 设置ID of source file for video clipping task.
                     * @param SrcFileId ID of source file for video clipping task.
                     */
                    void SetSrcFileId(const std::string& _srcFileId);

                    /**
                     * 判断参数 SrcFileId 是否已赋值
                     * @return SrcFileId 是否已赋值
                     */
                    bool SrcFileIdHasBeenSet() const;

                    /**
                     * 获取Information of file output by video clipping.
                     * @return FileInfo Information of file output by video clipping.
                     */
                    ClipFileInfo2017 GetFileInfo() const;

                    /**
                     * 设置Information of file output by video clipping.
                     * @param FileInfo Information of file output by video clipping.
                     */
                    void SetFileInfo(const ClipFileInfo2017& _fileInfo);

                    /**
                     * 判断参数 FileInfo 是否已赋值
                     * @return FileInfo 是否已赋值
                     */
                    bool FileInfoHasBeenSet() const;

                private:

                    /**
                     * Video clipping task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * ID of source file for video clipping task.
                     */
                    std::string m_srcFileId;
                    bool m_srcFileIdHasBeenSet;

                    /**
                     * Information of file output by video clipping.
                     */
                    ClipFileInfo2017 m_fileInfo;
                    bool m_fileInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CLIPTASK2017_H_
