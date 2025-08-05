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

#include <tencentcloud/faceid/v20180301/model/GetFaceIdResultIntlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetFaceIdResultIntlResponse::GetFaceIdResultIntlResponse() :
    m_resultHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_bestFrameHasBeenSet(false),
    m_videoHasBeenSet(false),
    m_actionVideoHasBeenSet(false),
    m_similarityHasBeenSet(false),
    m_extraHasBeenSet(false)
{
}

CoreInternalOutcome GetFaceIdResultIntlResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(rsp["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("BestFrame") && !rsp["BestFrame"].IsNull())
    {
        if (!rsp["BestFrame"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BestFrame` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bestFrame = string(rsp["BestFrame"].GetString());
        m_bestFrameHasBeenSet = true;
    }

    if (rsp.HasMember("Video") && !rsp["Video"].IsNull())
    {
        if (!rsp["Video"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Video` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_video = string(rsp["Video"].GetString());
        m_videoHasBeenSet = true;
    }

    if (rsp.HasMember("ActionVideo") && !rsp["ActionVideo"].IsNull())
    {
        if (!rsp["ActionVideo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionVideo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionVideo = string(rsp["ActionVideo"].GetString());
        m_actionVideoHasBeenSet = true;
    }

    if (rsp.HasMember("Similarity") && !rsp["Similarity"].IsNull())
    {
        if (!rsp["Similarity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Similarity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_similarity = rsp["Similarity"].GetDouble();
        m_similarityHasBeenSet = true;
    }

    if (rsp.HasMember("Extra") && !rsp["Extra"].IsNull())
    {
        if (!rsp["Extra"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Extra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extra = string(rsp["Extra"].GetString());
        m_extraHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetFaceIdResultIntlResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_bestFrameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BestFrame";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bestFrame.c_str(), allocator).Move(), allocator);
    }

    if (m_videoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Video";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_video.c_str(), allocator).Move(), allocator);
    }

    if (m_actionVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionVideo.c_str(), allocator).Move(), allocator);
    }

    if (m_similarityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Similarity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_similarity, allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string GetFaceIdResultIntlResponse::GetResult() const
{
    return m_result;
}

bool GetFaceIdResultIntlResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string GetFaceIdResultIntlResponse::GetDescription() const
{
    return m_description;
}

bool GetFaceIdResultIntlResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string GetFaceIdResultIntlResponse::GetBestFrame() const
{
    return m_bestFrame;
}

bool GetFaceIdResultIntlResponse::BestFrameHasBeenSet() const
{
    return m_bestFrameHasBeenSet;
}

string GetFaceIdResultIntlResponse::GetVideo() const
{
    return m_video;
}

bool GetFaceIdResultIntlResponse::VideoHasBeenSet() const
{
    return m_videoHasBeenSet;
}

string GetFaceIdResultIntlResponse::GetActionVideo() const
{
    return m_actionVideo;
}

bool GetFaceIdResultIntlResponse::ActionVideoHasBeenSet() const
{
    return m_actionVideoHasBeenSet;
}

double GetFaceIdResultIntlResponse::GetSimilarity() const
{
    return m_similarity;
}

bool GetFaceIdResultIntlResponse::SimilarityHasBeenSet() const
{
    return m_similarityHasBeenSet;
}

string GetFaceIdResultIntlResponse::GetExtra() const
{
    return m_extra;
}

bool GetFaceIdResultIntlResponse::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}


