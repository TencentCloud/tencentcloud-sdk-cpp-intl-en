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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TASKOUTPUTSTORAGE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TASKOUTPUTSTORAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CosOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/S3OutputStorage.h>
#include <tencentcloud/mps/v20190612/model/VODOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Media processing output object information.
                */
                class TaskOutputStorage : public AbstractModel
                {
                public:
                    TaskOutputStorage();
                    ~TaskOutputStorage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type of the media processing output object storage location. Supported values:
<li>COS: COS storage</li>
<li>AWS-S3: AWS storage, suitable for AWS tasks only and requires the same region</li>
<li> VOD: VOD Pro Edition </li>
                     * @return Type Type of the media processing output object storage location. Supported values:
<li>COS: COS storage</li>
<li>AWS-S3: AWS storage, suitable for AWS tasks only and requires the same region</li>
<li> VOD: VOD Pro Edition </li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of the media processing output object storage location. Supported values:
<li>COS: COS storage</li>
<li>AWS-S3: AWS storage, suitable for AWS tasks only and requires the same region</li>
<li> VOD: VOD Pro Edition </li>
                     * @param _type Type of the media processing output object storage location. Supported values:
<li>COS: COS storage</li>
<li>AWS-S3: AWS storage, suitable for AWS tasks only and requires the same region</li>
<li> VOD: VOD Pro Edition </li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return CosOutputStorage 
                     * 
                     */
                    CosOutputStorage GetCosOutputStorage() const;

                    /**
                     * 设置
                     * @param _cosOutputStorage 
                     * 
                     */
                    void SetCosOutputStorage(const CosOutputStorage& _cosOutputStorage);

                    /**
                     * 判断参数 CosOutputStorage 是否已赋值
                     * @return CosOutputStorage 是否已赋值
                     * 
                     */
                    bool CosOutputStorageHasBeenSet() const;

                    /**
                     * 获取
                     * @return S3OutputStorage 
                     * 
                     */
                    S3OutputStorage GetS3OutputStorage() const;

                    /**
                     * 设置
                     * @param _s3OutputStorage 
                     * 
                     */
                    void SetS3OutputStorage(const S3OutputStorage& _s3OutputStorage);

                    /**
                     * 判断参数 S3OutputStorage 是否已赋值
                     * @return S3OutputStorage 是否已赋值
                     * 
                     */
                    bool S3OutputStorageHasBeenSet() const;

                    /**
                     * 获取
                     * @return VODOutputStorage 
                     * 
                     */
                    VODOutputStorage GetVODOutputStorage() const;

                    /**
                     * 设置
                     * @param _vODOutputStorage 
                     * 
                     */
                    void SetVODOutputStorage(const VODOutputStorage& _vODOutputStorage);

                    /**
                     * 判断参数 VODOutputStorage 是否已赋值
                     * @return VODOutputStorage 是否已赋值
                     * 
                     */
                    bool VODOutputStorageHasBeenSet() const;

                private:

                    /**
                     * Type of the media processing output object storage location. Supported values:
<li>COS: COS storage</li>
<li>AWS-S3: AWS storage, suitable for AWS tasks only and requires the same region</li>
<li> VOD: VOD Pro Edition </li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    CosOutputStorage m_cosOutputStorage;
                    bool m_cosOutputStorageHasBeenSet;

                    /**
                     * 
                     */
                    S3OutputStorage m_s3OutputStorage;
                    bool m_s3OutputStorageHasBeenSet;

                    /**
                     * 
                     */
                    VODOutputStorage m_vODOutputStorage;
                    bool m_vODOutputStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TASKOUTPUTSTORAGE_H_
