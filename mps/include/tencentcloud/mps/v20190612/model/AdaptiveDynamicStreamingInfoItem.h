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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Adaptive Bitrate Streaming information
                */
                class AdaptiveDynamicStreamingInfoItem : public AbstractModel
                {
                public:
                    AdaptiveDynamicStreamingInfoItem();
                    ~AdaptiveDynamicStreamingInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Adaptive bitrate streaming specification.
                     * @return Definition Adaptive bitrate streaming specification.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Adaptive bitrate streaming specification.
                     * @param _definition Adaptive bitrate streaming specification.
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Packaging format, which may be two kinds: HLS and MPEG-DASH.
                     * @return Package Packaging format, which may be two kinds: HLS and MPEG-DASH.
                     * 
                     */
                    std::string GetPackage() const;

                    /**
                     * 设置Packaging format, which may be two kinds: HLS and MPEG-DASH.
                     * @param _package Packaging format, which may be two kinds: HLS and MPEG-DASH.
                     * 
                     */
                    void SetPackage(const std::string& _package);

                    /**
                     * 判断参数 Package 是否已赋值
                     * @return Package 是否已赋值
                     * 
                     */
                    bool PackageHasBeenSet() const;

                    /**
                     * 获取Playback path.
                     * @return Path Playback path.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Playback path.
                     * @param _path Playback path.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Storage location of the adaptive bitrate stream file.
                     * @return Storage Storage location of the adaptive bitrate stream file.
                     * 
                     */
                    TaskOutputStorage GetStorage() const;

                    /**
                     * 设置Storage location of the adaptive bitrate stream file.
                     * @param _storage Storage location of the adaptive bitrate stream file.
                     * 
                     */
                    void SetStorage(const TaskOutputStorage& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                private:

                    /**
                     * Adaptive bitrate streaming specification.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Packaging format, which may be two kinds: HLS and MPEG-DASH.
                     */
                    std::string m_package;
                    bool m_packageHasBeenSet;

                    /**
                     * Playback path.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Storage location of the adaptive bitrate stream file.
                     */
                    TaskOutputStorage m_storage;
                    bool m_storageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_
