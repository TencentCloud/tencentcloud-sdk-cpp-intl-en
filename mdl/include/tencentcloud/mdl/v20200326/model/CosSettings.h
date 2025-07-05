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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_COSSETTINGS_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_COSSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Cos destination setting.
                */
                class CosSettings : public AbstractModel
                {
                public:
                    CosSettings();
                    ~CosSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region of COS.
                     * @return Region Region of COS.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region of COS.
                     * @param _region Region of COS.
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
                     * 获取Bucket name of COS.
                     * @return Bucket Bucket name of COS.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Bucket name of COS.
                     * @param _bucket Bucket name of COS.
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
                     * 获取File output path, which can be empty. If it is not empty, it  ends with /.
                     * @return FilePath File output path, which can be empty. If it is not empty, it  ends with /.
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置File output path, which can be empty. If it is not empty, it  ends with /.
                     * @param _filePath File output path, which can be empty. If it is not empty, it  ends with /.
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取User-defined name, supports alphanumeric characters, underscores, and hyphens, with a length between 1 and 32 characters.
                     * @return FileName User-defined name, supports alphanumeric characters, underscores, and hyphens, with a length between 1 and 32 characters.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置User-defined name, supports alphanumeric characters, underscores, and hyphens, with a length between 1 and 32 characters.
                     * @param _fileName User-defined name, supports alphanumeric characters, underscores, and hyphens, with a length between 1 and 32 characters.
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取File suffix, only supports `jpg`.
                     * @return FileExt File suffix, only supports `jpg`.
                     * 
                     */
                    std::string GetFileExt() const;

                    /**
                     * 设置File suffix, only supports `jpg`.
                     * @param _fileExt File suffix, only supports `jpg`.
                     * 
                     */
                    void SetFileExt(const std::string& _fileExt);

                    /**
                     * 判断参数 FileExt 是否已赋值
                     * @return FileExt 是否已赋值
                     * 
                     */
                    bool FileExtHasBeenSet() const;

                    /**
                     * 获取Support `unix` or `utc0`, default unix.
                     * @return TimeFormat Support `unix` or `utc0`, default unix.
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置Support `unix` or `utc0`, default unix.
                     * @param _timeFormat Support `unix` or `utc0`, default unix.
                     * 
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     * 
                     */
                    bool TimeFormatHasBeenSet() const;

                private:

                    /**
                     * Region of COS.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Bucket name of COS.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * File output path, which can be empty. If it is not empty, it  ends with /.
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * User-defined name, supports alphanumeric characters, underscores, and hyphens, with a length between 1 and 32 characters.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File suffix, only supports `jpg`.
                     */
                    std::string m_fileExt;
                    bool m_fileExtHasBeenSet;

                    /**
                     * Support `unix` or `utc0`, default unix.
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_COSSETTINGS_H_
