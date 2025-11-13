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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COSFILEUPLOADTRIGGER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COSFILEUPLOADTRIGGER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Input rule bound to COS.
                */
                class CosFileUploadTrigger : public AbstractModel
                {
                public:
                    CosFileUploadTrigger();
                    ~CosFileUploadTrigger() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of the COS bucket bound to a workflow, such as `TopRankVideo-125xxx88`.
                     * @return Bucket Name of the COS bucket bound to a workflow, such as `TopRankVideo-125xxx88`.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Name of the COS bucket bound to a workflow, such as `TopRankVideo-125xxx88`.
                     * @param _bucket Name of the COS bucket bound to a workflow, such as `TopRankVideo-125xxx88`.
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取Region of the COS bucket bound to a workflow, such as `ap-chongiqng`.
                     * @return Region Region of the COS bucket bound to a workflow, such as `ap-chongiqng`.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region of the COS bucket bound to a workflow, such as `ap-chongiqng`.
                     * @param _region Region of the COS bucket bound to a workflow, such as `ap-chongiqng`.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Input path directory bound to a workflow, such as `/movie/201907/`. If this parameter is left empty, the `/` root directory will be used.
                     * @return Dir Input path directory bound to a workflow, such as `/movie/201907/`. If this parameter is left empty, the `/` root directory will be used.
                     * 
                     */
                    std::string GetDir() const;

                    /**
                     * 设置Input path directory bound to a workflow, such as `/movie/201907/`. If this parameter is left empty, the `/` root directory will be used.
                     * @param _dir Input path directory bound to a workflow, such as `/movie/201907/`. If this parameter is left empty, the `/` root directory will be used.
                     * 
                     */
                    void SetDir(const std::string& _dir);

                    /**
                     * 判断参数 Dir 是否已赋值
                     * @return Dir 是否已赋值
                     * 
                     */
                    bool DirHasBeenSet() const;

                    /**
                     * 获取All supported formats are as follows:
- Video file extension. The following 15 options are supported:
`.mp4`, `.avi`, `.mov`, `.wmv`, `.flv`, `.mkv`, `.mpg`, `.mpeg`, `.rm`, `.rmvb`, `.asf`, `.3gp`, `.webm`, `.ts`, and `.m4v`.
- Audio file extension. The following 7 options are supported:
`.mp3`, `.wav`, `.aac`, `.flac`, `.ogg`, `.m4a`, and `.amr`.
- Subtitle file extension. The following 2 options are supported:
`.vtt` and `.srt`.
- `*`: any file format is supported.
- Unspecified or input an empty list: the system supports the following preset file formats: video (`.mp4`, `.ts`, `.flv`, `.wmv`, `.asf`, `.rm`, `.rmvb`, `.mpg`, `.mpeg`, `.3gp`, `.mov`, `.webm`, `.mkv`, `.avi`, and `.m4v`); audio (`.mp3`, `.m4a`, `.flac`, `.ogg`, `.wav`, `.amr`, and `.aac`); subtitle (`.vtt` and `.srt`).
**Note**:
1. If the input format list includes `*`, it indicates that any file format is supported.
2. File extensions can be provided with or without `.`, such as `.mp4` or `mp4`, both are supported.
3. Custom file extensions should consist of digits, letters, and characters, and have a length between 1 and 64 characters.
                     * @return Formats All supported formats are as follows:
- Video file extension. The following 15 options are supported:
`.mp4`, `.avi`, `.mov`, `.wmv`, `.flv`, `.mkv`, `.mpg`, `.mpeg`, `.rm`, `.rmvb`, `.asf`, `.3gp`, `.webm`, `.ts`, and `.m4v`.
- Audio file extension. The following 7 options are supported:
`.mp3`, `.wav`, `.aac`, `.flac`, `.ogg`, `.m4a`, and `.amr`.
- Subtitle file extension. The following 2 options are supported:
`.vtt` and `.srt`.
- `*`: any file format is supported.
- Unspecified or input an empty list: the system supports the following preset file formats: video (`.mp4`, `.ts`, `.flv`, `.wmv`, `.asf`, `.rm`, `.rmvb`, `.mpg`, `.mpeg`, `.3gp`, `.mov`, `.webm`, `.mkv`, `.avi`, and `.m4v`); audio (`.mp3`, `.m4a`, `.flac`, `.ogg`, `.wav`, `.amr`, and `.aac`); subtitle (`.vtt` and `.srt`).
**Note**:
1. If the input format list includes `*`, it indicates that any file format is supported.
2. File extensions can be provided with or without `.`, such as `.mp4` or `mp4`, both are supported.
3. Custom file extensions should consist of digits, letters, and characters, and have a length between 1 and 64 characters.
                     * 
                     */
                    std::vector<std::string> GetFormats() const;

                    /**
                     * 设置All supported formats are as follows:
- Video file extension. The following 15 options are supported:
`.mp4`, `.avi`, `.mov`, `.wmv`, `.flv`, `.mkv`, `.mpg`, `.mpeg`, `.rm`, `.rmvb`, `.asf`, `.3gp`, `.webm`, `.ts`, and `.m4v`.
- Audio file extension. The following 7 options are supported:
`.mp3`, `.wav`, `.aac`, `.flac`, `.ogg`, `.m4a`, and `.amr`.
- Subtitle file extension. The following 2 options are supported:
`.vtt` and `.srt`.
- `*`: any file format is supported.
- Unspecified or input an empty list: the system supports the following preset file formats: video (`.mp4`, `.ts`, `.flv`, `.wmv`, `.asf`, `.rm`, `.rmvb`, `.mpg`, `.mpeg`, `.3gp`, `.mov`, `.webm`, `.mkv`, `.avi`, and `.m4v`); audio (`.mp3`, `.m4a`, `.flac`, `.ogg`, `.wav`, `.amr`, and `.aac`); subtitle (`.vtt` and `.srt`).
**Note**:
1. If the input format list includes `*`, it indicates that any file format is supported.
2. File extensions can be provided with or without `.`, such as `.mp4` or `mp4`, both are supported.
3. Custom file extensions should consist of digits, letters, and characters, and have a length between 1 and 64 characters.
                     * @param _formats All supported formats are as follows:
- Video file extension. The following 15 options are supported:
`.mp4`, `.avi`, `.mov`, `.wmv`, `.flv`, `.mkv`, `.mpg`, `.mpeg`, `.rm`, `.rmvb`, `.asf`, `.3gp`, `.webm`, `.ts`, and `.m4v`.
- Audio file extension. The following 7 options are supported:
`.mp3`, `.wav`, `.aac`, `.flac`, `.ogg`, `.m4a`, and `.amr`.
- Subtitle file extension. The following 2 options are supported:
`.vtt` and `.srt`.
- `*`: any file format is supported.
- Unspecified or input an empty list: the system supports the following preset file formats: video (`.mp4`, `.ts`, `.flv`, `.wmv`, `.asf`, `.rm`, `.rmvb`, `.mpg`, `.mpeg`, `.3gp`, `.mov`, `.webm`, `.mkv`, `.avi`, and `.m4v`); audio (`.mp3`, `.m4a`, `.flac`, `.ogg`, `.wav`, `.amr`, and `.aac`); subtitle (`.vtt` and `.srt`).
**Note**:
1. If the input format list includes `*`, it indicates that any file format is supported.
2. File extensions can be provided with or without `.`, such as `.mp4` or `mp4`, both are supported.
3. Custom file extensions should consist of digits, letters, and characters, and have a length between 1 and 64 characters.
                     * 
                     */
                    void SetFormats(const std::vector<std::string>& _formats);

                    /**
                     * 判断参数 Formats 是否已赋值
                     * @return Formats 是否已赋值
                     * 
                     */
                    bool FormatsHasBeenSet() const;

                private:

                    /**
                     * Name of the COS bucket bound to a workflow, such as `TopRankVideo-125xxx88`.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Region of the COS bucket bound to a workflow, such as `ap-chongiqng`.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Input path directory bound to a workflow, such as `/movie/201907/`. If this parameter is left empty, the `/` root directory will be used.
                     */
                    std::string m_dir;
                    bool m_dirHasBeenSet;

                    /**
                     * All supported formats are as follows:
- Video file extension. The following 15 options are supported:
`.mp4`, `.avi`, `.mov`, `.wmv`, `.flv`, `.mkv`, `.mpg`, `.mpeg`, `.rm`, `.rmvb`, `.asf`, `.3gp`, `.webm`, `.ts`, and `.m4v`.
- Audio file extension. The following 7 options are supported:
`.mp3`, `.wav`, `.aac`, `.flac`, `.ogg`, `.m4a`, and `.amr`.
- Subtitle file extension. The following 2 options are supported:
`.vtt` and `.srt`.
- `*`: any file format is supported.
- Unspecified or input an empty list: the system supports the following preset file formats: video (`.mp4`, `.ts`, `.flv`, `.wmv`, `.asf`, `.rm`, `.rmvb`, `.mpg`, `.mpeg`, `.3gp`, `.mov`, `.webm`, `.mkv`, `.avi`, and `.m4v`); audio (`.mp3`, `.m4a`, `.flac`, `.ogg`, `.wav`, `.amr`, and `.aac`); subtitle (`.vtt` and `.srt`).
**Note**:
1. If the input format list includes `*`, it indicates that any file format is supported.
2. File extensions can be provided with or without `.`, such as `.mp4` or `mp4`, both are supported.
3. Custom file extensions should consist of digits, letters, and characters, and have a length between 1 and 64 characters.
                     */
                    std::vector<std::string> m_formats;
                    bool m_formatsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COSFILEUPLOADTRIGGER_H_
