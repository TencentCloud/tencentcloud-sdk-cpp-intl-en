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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VODINPUTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VODINPUTINFO_H_

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
                * Media processing VOD object information.
                */
                class VODInputInfo : public AbstractModel
                {
                public:
                    VODInputInfo();
                    ~VODInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p><em>Bucket ID</em> where the media processing object file resides</p>
                     * @return Bucket <p><em>Bucket ID</em> where the media processing object file resides</p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p><em>Bucket ID</em> where the media processing object file resides</p>
                     * @param _bucket <p><em>Bucket ID</em> where the media processing object file resides</p>
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
                     * 获取<p>Region of the Bucket where the media processing object file resides</p>
                     * @return Region <p>Region of the Bucket where the media processing object file resides</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region of the Bucket where the media processing object file resides</p>
                     * @param _region <p>Region of the Bucket where the media processing object file resides</p>
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
                     * 获取<p>Input path of the media processing object file</p>
                     * @return Object <p>Input path of the media processing object file</p>
                     * 
                     */
                    std::string GetObject() const;

                    /**
                     * 设置<p>Input path of the media processing object file</p>
                     * @param _object <p>Input path of the media processing object file</p>
                     * 
                     */
                    void SetObject(const std::string& _object);

                    /**
                     * 判断参数 Object 是否已赋值
                     * @return Object 是否已赋值
                     * 
                     */
                    bool ObjectHasBeenSet() const;

                    /**
                     * 获取<p>VOD application ID.</p>
                     * @return SubAppId <p>VOD application ID.</p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p>VOD application ID.</p>
                     * @param _subAppId <p>VOD application ID.</p>
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
                     * 获取<p>Whether to use VOD Standard Edition.<br>Attention: If left empty, VOD Pro Edition is used.</p><p>Enumeration values: </p><ul><li>Use VOD Pro Edition</li><li>Use VOD Standard Edition, allowing tasks to be initiated with FileId</li></ul><p>Default value: 0</p>
                     * @return VodBasic <p>Whether to use VOD Standard Edition.<br>Attention: If left empty, VOD Pro Edition is used.</p><p>Enumeration values: </p><ul><li>Use VOD Pro Edition</li><li>Use VOD Standard Edition, allowing tasks to be initiated with FileId</li></ul><p>Default value: 0</p>
                     * 
                     */
                    int64_t GetVodBasic() const;

                    /**
                     * 设置<p>Whether to use VOD Standard Edition.<br>Attention: If left empty, VOD Pro Edition is used.</p><p>Enumeration values: </p><ul><li>Use VOD Pro Edition</li><li>Use VOD Standard Edition, allowing tasks to be initiated with FileId</li></ul><p>Default value: 0</p>
                     * @param _vodBasic <p>Whether to use VOD Standard Edition.<br>Attention: If left empty, VOD Pro Edition is used.</p><p>Enumeration values: </p><ul><li>Use VOD Pro Edition</li><li>Use VOD Standard Edition, allowing tasks to be initiated with FileId</li></ul><p>Default value: 0</p>
                     * 
                     */
                    void SetVodBasic(const int64_t& _vodBasic);

                    /**
                     * 判断参数 VodBasic 是否已赋值
                     * @return VodBasic 是否已赋值
                     * 
                     */
                    bool VodBasicHasBeenSet() const;

                    /**
                     * 获取<p>VOD Standard Edition FileId</p>
                     * @return FileId <p>VOD Standard Edition FileId</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>VOD Standard Edition FileId</p>
                     * @param _fileId <p>VOD Standard Edition FileId</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                private:

                    /**
                     * <p><em>Bucket ID</em> where the media processing object file resides</p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>Region of the Bucket where the media processing object file resides</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Input path of the media processing object file</p>
                     */
                    std::string m_object;
                    bool m_objectHasBeenSet;

                    /**
                     * <p>VOD application ID.</p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Whether to use VOD Standard Edition.<br>Attention: If left empty, VOD Pro Edition is used.</p><p>Enumeration values: </p><ul><li>Use VOD Pro Edition</li><li>Use VOD Standard Edition, allowing tasks to be initiated with FileId</li></ul><p>Default value: 0</p>
                     */
                    int64_t m_vodBasic;
                    bool m_vodBasicHasBeenSet;

                    /**
                     * <p>VOD Standard Edition FileId</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VODINPUTINFO_H_
